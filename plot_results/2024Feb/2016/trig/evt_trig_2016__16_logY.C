#ifdef __CLING__
#pragma cling optimize(0)
#endif
void evt_trig_2016__16_logY()
{
//=========Macro generated from canvas: evt_trig_2016__16/evt_trig_2016__16
//=========  (Wed Feb 14 13:43:32 2024) by ROOT version 6.28/10
   TCanvas *evt_trig_2016__16 = new TCanvas("evt_trig_2016__16", "evt_trig_2016__16",0,0,600,600);
   evt_trig_2016__16->SetHighLightColor(2);
   evt_trig_2016__16->Range(0,0,1,1);
   evt_trig_2016__16->SetFillColor(0);
   evt_trig_2016__16->SetFillStyle(4000);
   evt_trig_2016__16->SetBorderMode(0);
   evt_trig_2016__16->SetBorderSize(2);
   evt_trig_2016__16->SetFrameFillStyle(1000);
   evt_trig_2016__16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.6129016,-3.053276,4.209678,20.4587);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2.6227e+17);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",4,0,4);
   st_stack_1->SetMinimum(0.0009337614);
   st_stack_1->SetMaximum(1.280861e+18);
   st_stack_1->SetDirectory(nullptr);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->SetLineWidth(0);
   st_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_1->GetXaxis()->SetBinLabel(2,"Passed Both");
   st_stack_1->GetXaxis()->SetBinLabel(3,"Passed Quad");
   st_stack_1->GetXaxis()->SetBinLabel(4,"Passed Double");
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/1.0");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetLabelSize(0.05);
   st_stack_1->GetYaxis()->SetTitleSize(0.057);
   st_stack_1->GetYaxis()->SetTitleOffset(1.2);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *evt_trig_2016_stack_1 = new TH1D("evt_trig_2016_stack_1","",4,0,4);
   evt_trig_2016_stack_1->SetBinContent(1,1.688678e+09);
   evt_trig_2016_stack_1->SetBinContent(2,1.142006e+08);
   evt_trig_2016_stack_1->SetBinContent(3,1.023502e+08);
   evt_trig_2016_stack_1->SetBinContent(4,7.165163e+07);
   evt_trig_2016_stack_1->SetBinError(1,1596930);
   evt_trig_2016_stack_1->SetBinError(2,274455.7);
   evt_trig_2016_stack_1->SetBinError(3,265937.4);
   evt_trig_2016_stack_1->SetBinError(4,151395.5);
   evt_trig_2016_stack_1->SetEntries(6.061626e+07);

   ci = TColor::GetColor("#ff6600");
   evt_trig_2016_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_1->SetLineColor(ci);
   evt_trig_2016_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_1->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_1->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_1->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_1->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_1->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_1->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_1->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_1->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_1->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_1->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_1->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_1,"");
   
   TH1D *evt_trig_2016_stack_2 = new TH1D("evt_trig_2016_stack_2","",4,0,4);
   evt_trig_2016_stack_2->SetBinContent(1,689363.1);
   evt_trig_2016_stack_2->SetBinContent(2,201229.8);
   evt_trig_2016_stack_2->SetBinContent(3,189438.4);
   evt_trig_2016_stack_2->SetBinContent(4,135284.4);
   evt_trig_2016_stack_2->SetBinError(1,297.3728);
   evt_trig_2016_stack_2->SetBinError(2,159.8024);
   evt_trig_2016_stack_2->SetBinError(3,155.8616);
   evt_trig_2016_stack_2->SetBinError(4,134.2502);
   evt_trig_2016_stack_2->SetEntries(2.052192e+07);

   ci = TColor::GetColor("#660066");
   evt_trig_2016_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_2->SetLineColor(ci);
   evt_trig_2016_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_2->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_2->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_2->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_2->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_2->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_2->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_2->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_2->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_2->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_2->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_2->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_2,"");
   
   TH1D *evt_trig_2016_stack_3 = new TH1D("evt_trig_2016_stack_3","",4,0,4);
   evt_trig_2016_stack_3->SetBinContent(1,7260051);
   evt_trig_2016_stack_3->SetBinContent(2,2616896);
   evt_trig_2016_stack_3->SetBinContent(3,2513875);
   evt_trig_2016_stack_3->SetBinContent(4,1650400);
   evt_trig_2016_stack_3->SetBinError(1,620.2613);
   evt_trig_2016_stack_3->SetBinError(2,375.2784);
   evt_trig_2016_stack_3->SetBinError(3,368.1919);
   evt_trig_2016_stack_3->SetBinError(4,302.4251);
   evt_trig_2016_stack_3->SetEntries(2.772882e+08);

   ci = TColor::GetColor("#cc00cc");
   evt_trig_2016_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_3->SetLineColor(ci);
   evt_trig_2016_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_3->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_3->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_3->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_3->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_3->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_3->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_3->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_3->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_3->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_3->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_3->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_3,"");
   
   TH1D *evt_trig_2016_stack_4 = new TH1D("evt_trig_2016_stack_4","",4,0,4);
   evt_trig_2016_stack_4->SetBinContent(1,2393458);
   evt_trig_2016_stack_4->SetBinContent(2,321427.8);
   evt_trig_2016_stack_4->SetBinContent(3,293252.2);
   evt_trig_2016_stack_4->SetBinContent(4,237247.4);
   evt_trig_2016_stack_4->SetBinError(1,1297.559);
   evt_trig_2016_stack_4->SetBinError(2,397.9782);
   evt_trig_2016_stack_4->SetBinError(3,380.9194);
   evt_trig_2016_stack_4->SetBinError(4,252.9347);
   evt_trig_2016_stack_4->SetEntries(2.140675e+07);

   ci = TColor::GetColor("#00cccc");
   evt_trig_2016_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_4->SetLineColor(ci);
   evt_trig_2016_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_4->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_4->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_4->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_4->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_4->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_4->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_4->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_4->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_4->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_4->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_4->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_4,"");
   
   TH1D *evt_trig_2016_stack_5 = new TH1D("evt_trig_2016_stack_5","",4,0,4);
   evt_trig_2016_stack_5->SetBinContent(1,6703037);
   evt_trig_2016_stack_5->SetBinContent(2,602270.4);
   evt_trig_2016_stack_5->SetBinContent(3,549721.6);
   evt_trig_2016_stack_5->SetBinContent(4,444460.8);
   evt_trig_2016_stack_5->SetBinError(1,3810.068);
   evt_trig_2016_stack_5->SetBinError(2,991.6061);
   evt_trig_2016_stack_5->SetBinError(3,950.0248);
   evt_trig_2016_stack_5->SetBinError(4,645.6314);
   evt_trig_2016_stack_5->SetEntries(3.633766e+07);

   ci = TColor::GetColor("#ff99cc");
   evt_trig_2016_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_5->SetLineColor(ci);
   evt_trig_2016_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_5->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_5->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_5->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_5->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_5->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_5->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_5->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_5->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_5->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_5->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_5->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_5,"");
   
   TH1D *evt_trig_2016_stack_6 = new TH1D("evt_trig_2016_stack_6","",4,0,4);
   evt_trig_2016_stack_6->SetBinContent(1,64215.14);
   evt_trig_2016_stack_6->SetBinContent(2,5941.639);
   evt_trig_2016_stack_6->SetBinContent(3,5498.04);
   evt_trig_2016_stack_6->SetBinContent(4,4250.473);
   evt_trig_2016_stack_6->SetBinError(1,82.45235);
   evt_trig_2016_stack_6->SetBinError(2,25.29668);
   evt_trig_2016_stack_6->SetBinError(3,24.34275);
   evt_trig_2016_stack_6->SetBinError(4,21.77836);
   evt_trig_2016_stack_6->SetEntries(780397);

   ci = TColor::GetColor("#9933ff");
   evt_trig_2016_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_6->SetLineColor(ci);
   evt_trig_2016_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_6->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_6->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_6->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_6->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_6->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_6->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_6->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_6->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_6->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_6->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_6->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_6,"");
   
   TH1D *evt_trig_2016_stack_7 = new TH1D("evt_trig_2016_stack_7","",4,0,4);
   evt_trig_2016_stack_7->SetBinContent(1,32517.11);
   evt_trig_2016_stack_7->SetBinContent(2,4192.288);
   evt_trig_2016_stack_7->SetBinContent(3,3866.886);
   evt_trig_2016_stack_7->SetBinContent(4,3014.567);
   evt_trig_2016_stack_7->SetBinError(1,53.14089);
   evt_trig_2016_stack_7->SetBinError(2,19.31254);
   evt_trig_2016_stack_7->SetBinError(3,18.55159);
   evt_trig_2016_stack_7->SetBinError(4,16.65172);
   evt_trig_2016_stack_7->SetEntries(517968);

   ci = TColor::GetColor("#3399ff");
   evt_trig_2016_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_7->SetLineColor(ci);
   evt_trig_2016_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_7->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_7->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_7->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_7->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_7->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_7->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_7->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_7->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_7->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_7->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_7->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_7,"");
   
   TH1D *evt_trig_2016_stack_8 = new TH1D("evt_trig_2016_stack_8","",4,0,4);
   evt_trig_2016_stack_8->SetBinContent(1,11541.05);
   evt_trig_2016_stack_8->SetBinContent(2,1917.127);
   evt_trig_2016_stack_8->SetBinContent(3,1769.45);
   evt_trig_2016_stack_8->SetBinContent(4,1353.549);
   evt_trig_2016_stack_8->SetBinError(1,49.47015);
   evt_trig_2016_stack_8->SetBinError(2,20.4475);
   evt_trig_2016_stack_8->SetBinError(3,19.6663);
   evt_trig_2016_stack_8->SetBinError(4,17.45695);
   evt_trig_2016_stack_8->SetEntries(80750);

   ci = TColor::GetColor("#33ff99");
   evt_trig_2016_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_8->SetLineColor(ci);
   evt_trig_2016_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_8->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_8->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_8->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_8->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_8->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_8->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_8->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_8->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_8->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_8->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_8->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_8,"");
   
   TH1D *evt_trig_2016_stack_9 = new TH1D("evt_trig_2016_stack_9","",4,0,4);
   evt_trig_2016_stack_9->SetBinContent(1,1241.634);
   evt_trig_2016_stack_9->SetBinContent(2,482.8338);
   evt_trig_2016_stack_9->SetBinContent(3,451.4889);
   evt_trig_2016_stack_9->SetBinContent(4,344.2298);
   evt_trig_2016_stack_9->SetBinError(1,1.229844);
   evt_trig_2016_stack_9->SetBinError(2,0.7731198);
   evt_trig_2016_stack_9->SetBinError(3,0.7481633);
   evt_trig_2016_stack_9->SetBinError(4,0.6617593);
   evt_trig_2016_stack_9->SetEntries(2128918);

   ci = TColor::GetColor("#cccc00");
   evt_trig_2016_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_9->SetLineColor(ci);
   evt_trig_2016_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_9->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_9->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_9->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_9->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_9->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_9->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_9->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_9->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_9->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_9->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_9->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_9,"");
   
   TH1D *evt_trig_2016_stack_10 = new TH1D("evt_trig_2016_stack_10","",4,0,4);
   evt_trig_2016_stack_10->SetBinContent(1,549.546);
   evt_trig_2016_stack_10->SetBinContent(2,239.1957);
   evt_trig_2016_stack_10->SetBinContent(3,225.7246);
   evt_trig_2016_stack_10->SetBinContent(4,192.2104);
   evt_trig_2016_stack_10->SetBinError(1,0.4130728);
   evt_trig_2016_stack_10->SetBinError(2,0.2749433);
   evt_trig_2016_stack_10->SetBinError(3,0.2674054);
   evt_trig_2016_stack_10->SetBinError(4,0.2489083);
   evt_trig_2016_stack_10->SetEntries(3995012);

   ci = TColor::GetColor("#0000cc");
   evt_trig_2016_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_10->SetLineColor(ci);
   evt_trig_2016_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_10->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_10->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_10->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_10->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_10->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_10->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_10->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_10->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_10->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_10->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_10->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_10,"");
   
   TH1D *evt_trig_2016_stack_11 = new TH1D("evt_trig_2016_stack_11","",4,0,4);
   evt_trig_2016_stack_11->SetBinContent(1,61.91936);
   evt_trig_2016_stack_11->SetBinContent(2,14.79367);
   evt_trig_2016_stack_11->SetBinContent(3,13.9283);
   evt_trig_2016_stack_11->SetBinContent(4,10.53538);
   evt_trig_2016_stack_11->SetBinError(1,0.3496904);
   evt_trig_2016_stack_11->SetBinError(2,0.1722646);
   evt_trig_2016_stack_11->SetBinError(3,0.1672258);
   evt_trig_2016_stack_11->SetBinError(4,0.1477627);
   evt_trig_2016_stack_11->SetEntries(52509);

   ci = TColor::GetColor("#cc0000");
   evt_trig_2016_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_11->SetLineColor(ci);
   evt_trig_2016_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_11->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_11->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_11->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_11->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_11->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_11->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_11->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_11->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_11->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_11->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_11->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_11,"");
   
   TH1D *evt_trig_2016_stack_12 = new TH1D("evt_trig_2016_stack_12","",4,0,4);
   evt_trig_2016_stack_12->SetBinContent(1,25.53229);
   evt_trig_2016_stack_12->SetBinContent(2,6.650284);
   evt_trig_2016_stack_12->SetBinContent(3,6.277278);
   evt_trig_2016_stack_12->SetBinContent(4,5.244344);
   evt_trig_2016_stack_12->SetBinError(1,0.08463504);
   evt_trig_2016_stack_12->SetBinError(2,0.04345716);
   evt_trig_2016_stack_12->SetBinError(3,0.0422516);
   evt_trig_2016_stack_12->SetBinError(4,0.03899544);
   evt_trig_2016_stack_12->SetEntries(159492);

   ci = TColor::GetColor("#00cc00");
   evt_trig_2016_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   evt_trig_2016_stack_12->SetLineColor(ci);
   evt_trig_2016_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016_stack_12->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016_stack_12->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016_stack_12->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016_stack_12->GetXaxis()->SetRange(1,4);
   evt_trig_2016_stack_12->GetXaxis()->SetLabelFont(42);
   evt_trig_2016_stack_12->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_12->GetXaxis()->SetTitleFont(42);
   evt_trig_2016_stack_12->GetYaxis()->SetLabelFont(42);
   evt_trig_2016_stack_12->GetYaxis()->SetTitleFont(42);
   evt_trig_2016_stack_12->GetZaxis()->SetLabelFont(42);
   evt_trig_2016_stack_12->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(evt_trig_2016_stack_12,"");
   st->Draw("hist");
   
   TH1D *evt_trig_2016__1 = new TH1D("evt_trig_2016__1","",4,0,4);
   evt_trig_2016__1->SetBinContent(1,1.368681e+08);
   evt_trig_2016__1->SetBinContent(2,6.188504e+07);
   evt_trig_2016__1->SetBinContent(3,5.50046e+07);
   evt_trig_2016__1->SetBinContent(4,4.212263e+07);
   evt_trig_2016__1->SetEntries(2.958804e+08);

   ci = TColor::GetColor("#000099");
   evt_trig_2016__1->SetLineColor(ci);
   evt_trig_2016__1->SetLineWidth(2);
   evt_trig_2016__1->SetMarkerStyle(20);
   evt_trig_2016__1->SetMarkerSize(1.2);
   evt_trig_2016__1->GetXaxis()->SetBinLabel(1,"Total");
   evt_trig_2016__1->GetXaxis()->SetBinLabel(2,"Passed Both");
   evt_trig_2016__1->GetXaxis()->SetBinLabel(3,"Passed Quad");
   evt_trig_2016__1->GetXaxis()->SetBinLabel(4,"Passed Double");
   evt_trig_2016__1->GetXaxis()->SetRange(1,4);
   evt_trig_2016__1->GetXaxis()->SetLabelFont(42);
   evt_trig_2016__1->GetXaxis()->SetTitleOffset(1);
   evt_trig_2016__1->GetXaxis()->SetTitleFont(42);
   evt_trig_2016__1->GetYaxis()->SetLabelFont(42);
   evt_trig_2016__1->GetYaxis()->SetTitleFont(42);
   evt_trig_2016__1->GetZaxis()->SetLabelFont(42);
   evt_trig_2016__1->GetZaxis()->SetTitleOffset(1);
   evt_trig_2016__1->GetZaxis()->SetTitleFont(42);
   evt_trig_2016__1->Draw("same E");
   
   Double_t Graph_from_evt_trig_2016_fx1001[4] = { 0.5, 1.5, 2.5, 3.5 };
   Double_t Graph_from_evt_trig_2016_fy1001[4] = { 1.705834e+09, 1.179552e+08, 1.059084e+08, 7.412819e+07 };
   Double_t Graph_from_evt_trig_2016_fex1001[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_evt_trig_2016_fey1001[4] = { 1596935, 274458.1, 265939.7, 151397.4 };
   TGraphErrors *gre = new TGraphErrors(4,Graph_from_evt_trig_2016_fx1001,Graph_from_evt_trig_2016_fy1001,Graph_from_evt_trig_2016_fex1001,Graph_from_evt_trig_2016_fey1001);
   gre->SetName("Graph_from_evt_trig_2016");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_evt_trig_20161001 = new TH1F("Graph_Graph_from_evt_trig_20161001","",100,0,4.4);
   Graph_Graph_from_evt_trig_20161001->SetMinimum(6.657911e+07);
   Graph_Graph_from_evt_trig_20161001->SetMaximum(1.870776e+09);
   Graph_Graph_from_evt_trig_20161001->SetDirectory(nullptr);
   Graph_Graph_from_evt_trig_20161001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_evt_trig_20161001->SetLineColor(ci);
   Graph_Graph_from_evt_trig_20161001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_evt_trig_20161001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_evt_trig_20161001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_evt_trig_20161001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_evt_trig_20161001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_evt_trig_20161001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_evt_trig_20161001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_evt_trig_20161001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_evt_trig_20161001);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.5,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("evt_trig_2016","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","ZZ","F");

   ci = TColor::GetColor("#33ff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","WZ","F");

   ci = TColor::GetColor("#3399ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","WW","F");

   ci = TColor::GetColor("#9933ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","Single top","F");

   ci = TColor::GetColor("#660066");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("evt_trig_2016","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_evt_trig_2016","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   evt_trig_2016__16->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.6129016,-0.2774193,4.209678,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__2 = new TH1D("data_mc_ratio__2","",4,0,4);
   data_mc_ratio__2->SetBinContent(1,0.08023532);
   data_mc_ratio__2->SetBinContent(2,0.5246487);
   data_mc_ratio__2->SetBinContent(3,0.5193604);
   data_mc_ratio__2->SetBinContent(4,0.5682403);
   data_mc_ratio__2->SetBinError(1,6.858267e-06);
   data_mc_ratio__2->SetBinError(2,6.669231e-05);
   data_mc_ratio__2->SetBinError(3,7.002761e-05);
   data_mc_ratio__2->SetBinError(4,8.755367e-05);
   data_mc_ratio__2->SetMinimum(0.4);
   data_mc_ratio__2->SetMaximum(1.6);
   data_mc_ratio__2->SetEntries(628098);
   data_mc_ratio__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__2->SetLineColor(ci);
   data_mc_ratio__2->SetLineWidth(2);
   data_mc_ratio__2->SetMarkerStyle(20);
   data_mc_ratio__2->SetMarkerSize(1.2);
   data_mc_ratio__2->GetXaxis()->SetTitle("Trigger Events");
   data_mc_ratio__2->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__2->GetXaxis()->SetBinLabel(2,"Passed Both");
   data_mc_ratio__2->GetXaxis()->SetBinLabel(3,"Passed Quad");
   data_mc_ratio__2->GetXaxis()->SetBinLabel(4,"Passed Double");
   data_mc_ratio__2->GetXaxis()->SetRange(1,4);
   data_mc_ratio__2->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__2->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__2->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__2->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__2->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__2->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__2->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1002[4] = { 0.5, 1.5, 2.5, 3.5 };
   Double_t Graph_from_mc_statistical_error_fy1002[4] = { 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1002[4] = { 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1002[4] = { 0.0009361611, 0.002326799, 0.002511036, 0.002042373 };
   gre = new TGraphErrors(4,Graph_from_mc_statistical_error_fx1002,Graph_from_mc_statistical_error_fy1002,Graph_from_mc_statistical_error_fex1002,Graph_from_mc_statistical_error_fey1002);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1002 = new TH1F("Graph_Graph_from_mc_statistical_error1002","",100,0,4.4);
   Graph_Graph_from_mc_statistical_error1002->SetMinimum(0.9969868);
   Graph_Graph_from_mc_statistical_error1002->SetMaximum(1.003013);
   Graph_Graph_from_mc_statistical_error1002->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1002->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1002);
   
   gre->Draw("e2");
   bottomPad->Modified();
   evt_trig_2016__16->cd();
   evt_trig_2016__16->Modified();
   evt_trig_2016__16->cd();
   evt_trig_2016__16->SetSelected(evt_trig_2016__16);
}
