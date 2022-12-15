#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_both_16_logY()
{
//=========Macro generated from canvas: CutFlow_both_16/CutFlow_both_16
//=========  (Fri Dec  9 13:00:01 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_both_16 = new TCanvas("CutFlow_both_16", "CutFlow_both_16",0,0,600,600);
   CutFlow_both_16->SetHighLightColor(2);
   CutFlow_both_16->Range(-1.091764,5.060139,5.858166,13.98163);
   CutFlow_both_16->SetFillColor(0);
   CutFlow_both_16->SetFillStyle(4000);
   CutFlow_both_16->SetBorderMode(0);
   CutFlow_both_16->SetBorderSize(2);
   CutFlow_both_16->SetLogy();
   CutFlow_both_16->SetLeftMargin(0.15709);
   CutFlow_both_16->SetRightMargin(0.1234783);
   CutFlow_both_16->SetBottomMargin(0.12);
   CutFlow_both_16->SetFrameFillStyle(1000);
   CutFlow_both_16->SetFrameBorderMode(0);
   CutFlow_both_16->SetFrameFillStyle(1000);
   CutFlow_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(5413588);
   st->SetMaximum(5.578789e+12);
   
   TH1F *st_stack_89 = new TH1F("st_stack_89","",4,0,4);
   st_stack_89->SetMinimum(1351192);
   st_stack_89->SetMaximum(1.22879e+13);
   st_stack_89->SetDirectory(0);
   st_stack_89->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_89->SetLineColor(ci);
   st_stack_89->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_89->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_89->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_89->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_89->GetXaxis()->SetBinLabel(4,"tags cut");
   st_stack_89->GetXaxis()->SetRange(1,5);
   st_stack_89->GetXaxis()->SetLabelFont(42);
   st_stack_89->GetXaxis()->SetTitleOffset(1);
   st_stack_89->GetXaxis()->SetTitleFont(42);
   st_stack_89->GetYaxis()->SetTitle("Events/1.0");
   st_stack_89->GetYaxis()->SetLabelFont(42);
   st_stack_89->GetYaxis()->SetTitleSize(0.037);
   st_stack_89->GetYaxis()->SetTitleFont(42);
   st_stack_89->GetZaxis()->SetLabelFont(42);
   st_stack_89->GetZaxis()->SetTitleOffset(1);
   st_stack_89->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_89);
   
   
   TH1D *VbbHcc_both_CutFlow_stack_1 = new TH1D("VbbHcc_both_CutFlow_stack_1","",4,0,4);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(1,5.572955e+10);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(2,5.572847e+10);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(3,5.386445e+09);
   VbbHcc_both_CutFlow_stack_1->SetBinContent(4,1.292038e+07);
   VbbHcc_both_CutFlow_stack_1->SetBinError(1,8799586);
   VbbHcc_both_CutFlow_stack_1->SetBinError(2,8799500);
   VbbHcc_both_CutFlow_stack_1->SetBinError(3,2735713);
   VbbHcc_both_CutFlow_stack_1->SetBinError(4,133985.3);
   VbbHcc_both_CutFlow_stack_1->SetEntries(8.410411e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_2 = new TH1D("VbbHcc_both_CutFlow_stack_2","",4,0,4);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(1,1.035228e+07);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(2,1.015219e+07);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(3,2340639);
   VbbHcc_both_CutFlow_stack_2->SetBinContent(4,148130.9);
   VbbHcc_both_CutFlow_stack_2->SetBinError(1,1045.046);
   VbbHcc_both_CutFlow_stack_2->SetBinError(2,1028.409);
   VbbHcc_both_CutFlow_stack_2->SetBinError(3,586.5945);
   VbbHcc_both_CutFlow_stack_2->SetBinError(4,149.1345);
   VbbHcc_both_CutFlow_stack_2->SetEntries(3.974677e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_3 = new TH1D("VbbHcc_both_CutFlow_stack_3","",4,0,4);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(1,2.981925e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(2,2.837212e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(3,1.745444e+07);
   VbbHcc_both_CutFlow_stack_3->SetBinContent(4,2181639);
   VbbHcc_both_CutFlow_stack_3->SetBinError(1,1347.816);
   VbbHcc_both_CutFlow_stack_3->SetBinError(2,1321.544);
   VbbHcc_both_CutFlow_stack_3->SetBinError(3,1073.24);
   VbbHcc_both_CutFlow_stack_3->SetBinError(4,385.7723);
   VbbHcc_both_CutFlow_stack_3->SetEntries(1.336863e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_4 = new TH1D("VbbHcc_both_CutFlow_stack_4","",4,0,4);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(1,4095440);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(2,4091240);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(3,2074480);
   VbbHcc_both_CutFlow_stack_4->SetBinContent(4,36845.54);
   VbbHcc_both_CutFlow_stack_4->SetBinError(1,1101.182);
   VbbHcc_both_CutFlow_stack_4->SetBinError(2,1100.618);
   VbbHcc_both_CutFlow_stack_4->SetBinError(3,783.7248);
   VbbHcc_both_CutFlow_stack_4->SetBinError(4,104.4483);
   VbbHcc_both_CutFlow_stack_4->SetEntries(3.478045e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_5 = new TH1D("VbbHcc_both_CutFlow_stack_5","",4,0,4);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(1,9915843);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(2,9907940);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(3,4930094);
   VbbHcc_both_CutFlow_stack_5->SetBinContent(4,20665.57);
   VbbHcc_both_CutFlow_stack_5->SetBinError(1,3198.752);
   VbbHcc_both_CutFlow_stack_5->SetBinError(2,3197.477);
   VbbHcc_both_CutFlow_stack_5->SetBinError(3,2255.503);
   VbbHcc_both_CutFlow_stack_5->SetBinError(4,146.0291);
   VbbHcc_both_CutFlow_stack_5->SetEntries(2.4009e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_6 = new TH1D("VbbHcc_both_CutFlow_stack_6","",4,0,4);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(1,2721926);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(2,2680960);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(3,207662.1);
   VbbHcc_both_CutFlow_stack_6->SetBinContent(4,612.6939);
   VbbHcc_both_CutFlow_stack_6->SetBinError(1,484.2778);
   VbbHcc_both_CutFlow_stack_6->SetBinError(2,480.6197);
   VbbHcc_both_CutFlow_stack_6->SetBinError(3,133.7627);
   VbbHcc_both_CutFlow_stack_6->SetBinError(4,7.265713);
   VbbHcc_both_CutFlow_stack_6->SetEntries(6.51238e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_7 = new TH1D("VbbHcc_both_CutFlow_stack_7","",4,0,4);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(1,988715.3);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(2,966745.4);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(3,87549.52);
   VbbHcc_both_CutFlow_stack_7->SetBinContent(4,1193.815);
   VbbHcc_both_CutFlow_stack_7->SetBinError(1,262.4517);
   VbbHcc_both_CutFlow_stack_7->SetBinError(2,259.5194);
   VbbHcc_both_CutFlow_stack_7->SetBinError(3,78.09814);
   VbbHcc_both_CutFlow_stack_7->SetBinError(4,9.119739);
   VbbHcc_both_CutFlow_stack_7->SetEntries(2.934246e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_8 = new TH1D("VbbHcc_both_CutFlow_stack_8","",4,0,4);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(1,436440.5);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(2,425515.3);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(3,42604.3);
   VbbHcc_both_CutFlow_stack_8->SetBinContent(4,1183.202);
   VbbHcc_both_CutFlow_stack_8->SetBinError(1,283.6782);
   VbbHcc_both_CutFlow_stack_8->SetBinError(2,280.1051);
   VbbHcc_both_CutFlow_stack_8->SetBinError(3,88.63192);
   VbbHcc_both_CutFlow_stack_8->SetBinError(4,14.77042);
   VbbHcc_both_CutFlow_stack_8->SetEntries(4912226);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_9 = new TH1D("VbbHcc_both_CutFlow_stack_9","",4,0,4);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(1,12889.16);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(2,12871.77);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(3,4059.803);
   VbbHcc_both_CutFlow_stack_9->SetBinContent(4,440.1401);
   VbbHcc_both_CutFlow_stack_9->SetBinError(1,4.491183);
   VbbHcc_both_CutFlow_stack_9->SetBinError(2,4.488205);
   VbbHcc_both_CutFlow_stack_9->SetBinError(3,2.473802);
   VbbHcc_both_CutFlow_stack_9->SetBinError(4,0.8139696);
   VbbHcc_both_CutFlow_stack_9->SetEntries(2.176231e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_10 = new TH1D("VbbHcc_both_CutFlow_stack_10","",4,0,4);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(1,1790.231);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(2,1782.223);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(3,1103.671);
   VbbHcc_both_CutFlow_stack_10->SetBinContent(4,144.7921);
   VbbHcc_both_CutFlow_stack_10->SetBinError(1,0.8006157);
   VbbHcc_both_CutFlow_stack_10->SetBinError(2,0.7988229);
   VbbHcc_both_CutFlow_stack_10->SetBinError(3,0.6286218);
   VbbHcc_both_CutFlow_stack_10->SetBinError(4,0.227689);
   VbbHcc_both_CutFlow_stack_10->SetEntries(1.346451e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_11 = new TH1D("VbbHcc_both_CutFlow_stack_11","",4,0,4);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(1,640.1367);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(2,639.6454);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(3,221.0844);
   VbbHcc_both_CutFlow_stack_11->SetBinContent(4,7.674322);
   VbbHcc_both_CutFlow_stack_11->SetBinError(1,0.9905948);
   VbbHcc_both_CutFlow_stack_11->SetBinError(2,0.9902229);
   VbbHcc_both_CutFlow_stack_11->SetBinError(3,0.5712739);
   VbbHcc_both_CutFlow_stack_11->SetBinError(4,0.1063251);
   VbbHcc_both_CutFlow_stack_11->SetEntries(1107936);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_both_CutFlow_stack_12 = new TH1D("VbbHcc_both_CutFlow_stack_12","",4,0,4);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(1,88.93776);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(2,88.70731);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(3,59.13065);
   VbbHcc_both_CutFlow_stack_12->SetBinContent(4,2.945388);
   VbbHcc_both_CutFlow_stack_12->SetBinError(1,0.1265385);
   VbbHcc_both_CutFlow_stack_12->SetBinError(2,0.1263745);
   VbbHcc_both_CutFlow_stack_12->SetBinError(3,0.1031777);
   VbbHcc_both_CutFlow_stack_12->SetBinError(4,0.02302772);
   VbbHcc_both_CutFlow_stack_12->SetEntries(1331518);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_both_CutFlow_stack_1","QCD","F");

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
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_both_16->Modified();
   CutFlow_both_16->cd();
   CutFlow_both_16->SetSelected(CutFlow_both_16);
}
