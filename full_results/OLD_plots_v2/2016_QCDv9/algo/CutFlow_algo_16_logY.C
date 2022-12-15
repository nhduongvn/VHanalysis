#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_algo_16_logY()
{
//=========Macro generated from canvas: CutFlow_algo_16/CutFlow_algo_16
//=========  (Fri Dec  9 13:00:00 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_algo_16 = new TCanvas("CutFlow_algo_16", "CutFlow_algo_16",0,0,600,600);
   CutFlow_algo_16->SetHighLightColor(2);
   CutFlow_algo_16->Range(-1.310117,2.412148,7.029799,14.363);
   CutFlow_algo_16->SetFillColor(0);
   CutFlow_algo_16->SetFillStyle(4000);
   CutFlow_algo_16->SetBorderMode(0);
   CutFlow_algo_16->SetBorderSize(2);
   CutFlow_algo_16->SetLogy();
   CutFlow_algo_16->SetLeftMargin(0.15709);
   CutFlow_algo_16->SetRightMargin(0.1234783);
   CutFlow_algo_16->SetBottomMargin(0.12);
   CutFlow_algo_16->SetFrameFillStyle(1000);
   CutFlow_algo_16->SetFrameBorderMode(0);
   CutFlow_algo_16->SetFrameFillStyle(1000);
   CutFlow_algo_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(35770.35);
   st->SetMaximum(5.578789e+12);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",5,0,5);
   st_stack_45->SetMinimum(7018.6);
   st_stack_45->SetMaximum(1.472021e+13);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_45->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_45->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_45->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_45->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_45->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_45->GetXaxis()->SetRange(1,6);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetTitleOffset(1);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Events/1.0");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetTitleSize(0.037);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetTitleOffset(1);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_algo_CutFlow_stack_1 = new TH1D("VbbHcc_algo_CutFlow_stack_1","",5,0,5);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(1,5.572955e+10);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(2,5.572847e+10);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(3,5.386445e+09);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(4,3.460116e+07);
   VbbHcc_algo_CutFlow_stack_1->SetBinContent(5,1821552);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(1,8799586);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(2,8799500);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(3,2735713);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(4,219262.7);
   VbbHcc_algo_CutFlow_stack_1->SetBinError(5,50308.37);
   VbbHcc_algo_CutFlow_stack_1->SetEntries(8.412102e+07);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_2 = new TH1D("VbbHcc_algo_CutFlow_stack_2","",5,0,5);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(1,1.035228e+07);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(2,1.015219e+07);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(3,2340639);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(4,110807.8);
   VbbHcc_algo_CutFlow_stack_2->SetBinContent(5,10994.15);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(1,1045.046);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(2,1028.409);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(3,586.5945);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(4,117.2624);
   VbbHcc_algo_CutFlow_stack_2->SetBinError(5,37.26003);
   VbbHcc_algo_CutFlow_stack_2->SetEntries(3.973291e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_3 = new TH1D("VbbHcc_algo_CutFlow_stack_3","",5,0,5);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(1,2.981925e+07);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(2,2.837212e+07);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(3,1.745444e+07);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(4,987866.8);
   VbbHcc_algo_CutFlow_stack_3->SetBinContent(5,93948.75);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(1,1347.816);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(2,1321.544);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(3,1073.24);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(4,250.1232);
   VbbHcc_algo_CutFlow_stack_3->SetBinError(5,77.69808);
   VbbHcc_algo_CutFlow_stack_3->SetEntries(1.321183e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_4 = new TH1D("VbbHcc_algo_CutFlow_stack_4","",5,0,5);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(1,4095440);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(2,4091240);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(3,2074480);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(4,50411.02);
   VbbHcc_algo_CutFlow_stack_4->SetBinContent(5,3592.412);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(1,1101.182);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(2,1100.618);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(3,783.7248);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(4,122.172);
   VbbHcc_algo_CutFlow_stack_4->SetBinError(5,32.61385);
   VbbHcc_algo_CutFlow_stack_4->SetEntries(3.48384e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_5 = new TH1D("VbbHcc_algo_CutFlow_stack_5","",5,0,5);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(1,9915843);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(2,9907940);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(3,4930094);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(4,15107.84);
   VbbHcc_algo_CutFlow_stack_5->SetBinContent(5,1528.222);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(1,3198.752);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(2,3197.477);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(3,2255.503);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(4,124.8581);
   VbbHcc_algo_CutFlow_stack_5->SetBinError(5,39.71084);
   VbbHcc_algo_CutFlow_stack_5->SetEntries(2.40051e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_6 = new TH1D("VbbHcc_algo_CutFlow_stack_6","",5,0,5);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(1,2721926);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(2,2680960);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(3,207662.1);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(4,491.7233);
   VbbHcc_algo_CutFlow_stack_6->SetBinContent(5,47.99192);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(1,484.2778);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(2,480.6197);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(3,133.7627);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(4,6.509039);
   VbbHcc_algo_CutFlow_stack_6->SetBinError(5,2.033483);
   VbbHcc_algo_CutFlow_stack_6->SetEntries(6.512296e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_7 = new TH1D("VbbHcc_algo_CutFlow_stack_7","",5,0,5);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(1,988715.3);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(2,966745.4);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(3,87549.52);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(4,1890.904);
   VbbHcc_algo_CutFlow_stack_7->SetBinContent(5,178.0691);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(1,262.4517);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(2,259.5194);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(3,78.09814);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(4,11.47753);
   VbbHcc_algo_CutFlow_stack_7->SetBinError(5,3.522152);
   VbbHcc_algo_CutFlow_stack_7->SetEntries(2.935503e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_8 = new TH1D("VbbHcc_algo_CutFlow_stack_8","",5,0,5);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(1,436440.5);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(2,425515.3);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(3,42604.3);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(4,1865.613);
   VbbHcc_algo_CutFlow_stack_8->SetBinContent(5,173.5068);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(1,283.6782);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(2,280.1051);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(3,88.63192);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(4,18.54702);
   VbbHcc_algo_CutFlow_stack_8->SetBinError(5,5.656159);
   VbbHcc_algo_CutFlow_stack_8->SetEntries(4916868);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_9 = new TH1D("VbbHcc_algo_CutFlow_stack_9","",5,0,5);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(1,12889.16);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(2,12871.77);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(3,4059.803);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(4,574.4094);
   VbbHcc_algo_CutFlow_stack_9->SetBinContent(5,49.48358);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(1,4.491183);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(2,4.488205);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(3,2.473802);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(4,0.9339181);
   VbbHcc_algo_CutFlow_stack_9->SetBinError(5,0.2744746);
   VbbHcc_algo_CutFlow_stack_9->SetEntries(2.1894e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_10 = new TH1D("VbbHcc_algo_CutFlow_stack_10","",5,0,5);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(1,1790.231);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(2,1782.223);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(3,1103.671);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(4,169.0386);
   VbbHcc_algo_CutFlow_stack_10->SetBinContent(5,14.0526);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(1,0.8006157);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(2,0.7988229);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(3,0.6286218);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(4,0.2460155);
   VbbHcc_algo_CutFlow_stack_10->SetBinError(5,0.07093292);
   VbbHcc_algo_CutFlow_stack_10->SetEntries(1.357148e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_11 = new TH1D("VbbHcc_algo_CutFlow_stack_11","",5,0,5);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(1,640.1367);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(2,639.6454);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(3,221.0844);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(4,9.603347);
   VbbHcc_algo_CutFlow_stack_11->SetBinContent(5,1.514119);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(1,0.9905948);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(2,0.9902229);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(3,0.5712739);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(4,0.1197037);
   VbbHcc_algo_CutFlow_stack_11->SetBinError(5,0.04745393);
   VbbHcc_algo_CutFlow_stack_11->SetEntries(1110478);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_algo_CutFlow_stack_12 = new TH1D("VbbHcc_algo_CutFlow_stack_12","",5,0,5);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(1,88.93776);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(2,88.70731);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(3,59.13065);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(4,2.635186);
   VbbHcc_algo_CutFlow_stack_12->SetBinContent(5,0.4137226);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(1,0.1265385);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(2,0.1263745);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(3,0.1031777);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(4,0.02178137);
   VbbHcc_algo_CutFlow_stack_12->SetBinError(5,0.008630466);
   VbbHcc_algo_CutFlow_stack_12->SetEntries(1332093);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_CutFlow_stack_1","QCD","F");

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
   CutFlow_algo_16->Modified();
   CutFlow_algo_16->cd();
   CutFlow_algo_16->SetSelected(CutFlow_algo_16);
}
