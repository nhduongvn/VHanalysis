#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_tags_18_logY()
{
//=========Macro generated from canvas: CutFlow_tags_18/CutFlow_tags_18
//=========  (Fri Dec  9 12:59:58 2022) by ROOT version 6.26/06
   TCanvas *CutFlow_tags_18 = new TCanvas("CutFlow_tags_18", "CutFlow_tags_18",0,0,600,600);
   CutFlow_tags_18->SetHighLightColor(2);
   CutFlow_tags_18->Range(-1.310117,3.519207,7.029799,14.45847);
   CutFlow_tags_18->SetFillColor(0);
   CutFlow_tags_18->SetFillStyle(4000);
   CutFlow_tags_18->SetBorderMode(0);
   CutFlow_tags_18->SetBorderSize(2);
   CutFlow_tags_18->SetLogy();
   CutFlow_tags_18->SetLeftMargin(0.15709);
   CutFlow_tags_18->SetRightMargin(0.1234783);
   CutFlow_tags_18->SetBottomMargin(0.12);
   CutFlow_tags_18->SetFrameFillStyle(1000);
   CutFlow_tags_18->SetFrameBorderMode(0);
   CutFlow_tags_18->SetFrameFillStyle(1000);
   CutFlow_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(321240.9);
   st->SetMaximum(9.288648e+12);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",5,0,5);
   st_stack_3->SetMinimum(67907.56);
   st_stack_3->SetMaximum(2.31494e+13);
   st_stack_3->SetDirectory(0);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->GetXaxis()->SetTitle(""Cut flow"");
   st_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   st_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   st_stack_3->GetXaxis()->SetRange(1,6);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/1.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetTitleSize(0.037);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VbbHcc_tags_CutFlow_stack_1 = new TH1D("VbbHcc_tags_CutFlow_stack_1","",5,0,5);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(1,9.278934e+10);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(2,9.278073e+10);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(3,9.09571e+09);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(4,3.040127e+08);
   VbbHcc_tags_CutFlow_stack_1->SetBinContent(5,2.433688e+07);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(1,1.220363e+07);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(2,1.220306e+07);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(3,3820834);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(4,698531.1);
   VbbHcc_tags_CutFlow_stack_1->SetBinError(5,197638.8);
   VbbHcc_tags_CutFlow_stack_1->SetEntries(1.214904e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_2 = new TH1D("VbbHcc_tags_CutFlow_stack_2","",5,0,5);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(1,1.723649e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(2,1.687534e+07);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(3,3908647);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(4,1364926);
   VbbHcc_tags_CutFlow_stack_2->SetBinContent(5,265536.3);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(1,1499.19);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(2,1473.466);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(3,845.777);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(4,475.387);
   VbbHcc_tags_CutFlow_stack_2->SetBinError(5,223.3273);
   VbbHcc_tags_CutFlow_stack_2->SetEntries(5.655291e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_3 = new TH1D("VbbHcc_tags_CutFlow_stack_3","",5,0,5);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(1,4.964886e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(2,4.710353e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(3,2.90549e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(4,1.520989e+07);
   VbbHcc_tags_CutFlow_stack_3->SetBinContent(5,3887627);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(1,1799.086);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(2,1761.097);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(3,1429.889);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(4,1029.71);
   VbbHcc_tags_CutFlow_stack_3->SetBinError(5,530.6335);
   VbbHcc_tags_CutFlow_stack_3->SetEntries(2.304605e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_4 = new TH1D("VbbHcc_tags_CutFlow_stack_4","",5,0,5);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(1,6818882);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(2,6808640);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(3,3445106);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(4,421095.4);
   VbbHcc_tags_CutFlow_stack_4->SetBinContent(5,63218.11);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(1,1874.621);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(2,1873.213);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(3,1332.472);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(4,465.8511);
   VbbHcc_tags_CutFlow_stack_4->SetBinError(5,180.5002);
   VbbHcc_tags_CutFlow_stack_4->SetEntries(3.40671e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_5 = new TH1D("VbbHcc_tags_CutFlow_stack_5","",5,0,5);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(1,1.650982e+07);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(2,1.648925e+07);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(3,8186729);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(4,191526.4);
   VbbHcc_tags_CutFlow_stack_5->SetBinContent(5,37190.04);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(1,6040.614);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(2,6036.852);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(3,4253.684);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(4,650.6154);
   VbbHcc_tags_CutFlow_stack_5->SetBinError(5,286.6971);
   VbbHcc_tags_CutFlow_stack_5->SetEntries(1.87384e+07);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_6 = new TH1D("VbbHcc_tags_CutFlow_stack_6","",5,0,5);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(1,4531989);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(2,4458534);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(3,348640.9);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(4,7195.28);
   VbbHcc_tags_CutFlow_stack_6->SetBinContent(5,1195.793);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(1,1144.537);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(2,1135.223);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(3,317.4493);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(4,45.60465);
   VbbHcc_tags_CutFlow_stack_6->SetBinError(5,18.59145);
   VbbHcc_tags_CutFlow_stack_6->SetEntries(3.233907e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_7 = new TH1D("VbbHcc_tags_CutFlow_stack_7","",5,0,5);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(1,1646205);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(2,1607425);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(3,147015.1);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(4,14930.86);
   VbbHcc_tags_CutFlow_stack_7->SetBinContent(5,2234.299);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(1,647.9414);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(2,640.2641);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(3,193.631);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(4,61.70725);
   VbbHcc_tags_CutFlow_stack_7->SetBinError(5,23.87066);
   VbbHcc_tags_CutFlow_stack_7->SetEntries(1.340171e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_8 = new TH1D("VbbHcc_tags_CutFlow_stack_8","",5,0,5);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(1,726670.7);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(2,707583.6);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(3,71620.11);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(4,13304.13);
   VbbHcc_tags_CutFlow_stack_8->SetBinContent(5,2113.688);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(1,418.6375);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(2,413.1028);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(3,131.4277);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(4,56.64511);
   VbbHcc_tags_CutFlow_stack_8->SetBinError(5,22.57822);
   VbbHcc_tags_CutFlow_stack_8->SetEntries(6307745);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_9 = new TH1D("VbbHcc_tags_CutFlow_stack_9","",5,0,5);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(1,21460.37);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(2,21425);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(3,6802.672);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(4,4153.047);
   VbbHcc_tags_CutFlow_stack_9->SetBinContent(5,729.072);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(1,7.224385);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(2,7.218542);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(3,3.991838);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(4,3.123243);
   VbbHcc_tags_CutFlow_stack_9->SetBinError(5,1.306954);
   VbbHcc_tags_CutFlow_stack_9->SetEntries(2.520614e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_10 = new TH1D("VbbHcc_tags_CutFlow_stack_10","",5,0,5);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(1,2980.723);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(2,2967.389);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(3,1837.606);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(4,1031.686);
   VbbHcc_tags_CutFlow_stack_10->SetBinContent(5,216.4989);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(1,1.33302);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(2,1.330035);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(3,1.046651);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(4,0.7842409);
   VbbHcc_tags_CutFlow_stack_10->SetBinError(5,0.3592557);
   VbbHcc_tags_CutFlow_stack_10->SetEntries(1.515388e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_11 = new TH1D("VbbHcc_tags_CutFlow_stack_11","",5,0,5);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(1,1065.823);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(2,1064.704);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(3,374.8702);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(4,61.94941);
   VbbHcc_tags_CutFlow_stack_11->SetBinContent(5,13.48282);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(1,1.622075);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(2,1.621259);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(3,0.9449904);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(4,0.3841103);
   VbbHcc_tags_CutFlow_stack_11->SetBinError(5,0.1794759);
   VbbHcc_tags_CutFlow_stack_11->SetEntries(1173032);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_tags_CutFlow_stack_12 = new TH1D("VbbHcc_tags_CutFlow_stack_12","",5,0,5);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(1,148.0808);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(2,147.61);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(3,96.68236);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(4,17.73821);
   VbbHcc_tags_CutFlow_stack_12->SetBinContent(5,4.193791);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(1,0.2097327);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(2,0.209399);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(3,0.1694691);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(4,0.07258914);
   VbbHcc_tags_CutFlow_stack_12->SetBinError(5,0.03529557);
   VbbHcc_tags_CutFlow_stack_12->SetEntries(1394719);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_CutFlow_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_tags_18->Modified();
   CutFlow_tags_18->cd();
   CutFlow_tags_18->SetSelected(CutFlow_tags_18);
}
