#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_algoFirst_17()
{
//=========Macro generated from canvas: CutFlow_algoFirst_17/CutFlow_algoFirst_17
//=========  (Wed Nov 15 14:59:00 2023) by ROOT version 6.28/04
   TCanvas *CutFlow_algoFirst_17 = new TCanvas("CutFlow_algoFirst_17", "CutFlow_algoFirst_17",0,0,600,600);
   CutFlow_algoFirst_17->SetHighLightColor(2);
   CutFlow_algoFirst_17->Range(0,0,1,1);
   CutFlow_algoFirst_17->SetFillColor(0);
   CutFlow_algoFirst_17->SetFillStyle(4000);
   CutFlow_algoFirst_17->SetBorderMode(0);
   CutFlow_algoFirst_17->SetBorderSize(2);
   CutFlow_algoFirst_17->SetFrameFillStyle(1000);
   CutFlow_algoFirst_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.072578,-2.734038e+09,7.366936,2.731303e+12);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2.4579e+12);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",8,0,8);
   st_stack_5->SetMinimum(0.01);
   st_stack_5->SetMaximum(2.4579e+12);
   st_stack_5->SetDirectory(nullptr);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->SetLineWidth(0);
   st_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   st_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   st_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   st_stack_5->GetXaxis()->SetBinLabel(4,"triggers");
   st_stack_5->GetXaxis()->SetBinLabel(5,"b-tag #1");
   st_stack_5->GetXaxis()->SetBinLabel(6,"b-tag #2");
   st_stack_5->GetXaxis()->SetBinLabel(7,"c-tag #1");
   st_stack_5->GetXaxis()->SetBinLabel(8,"c-tag #2");
   st_stack_5->GetXaxis()->SetRange(1,7);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetTitleOffset(1);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/1.0");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetLabelSize(0.05);
   st_stack_5->GetYaxis()->SetTitleSize(0.057);
   st_stack_5->GetYaxis()->SetTitleOffset(1.2);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetTitleOffset(1);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_1 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_1","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(1,1.105792e+12);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(2,1.105691e+12);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(3,2.404423e+09);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(4,2.697466e+07);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(5,6151024);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(6,1894419);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(7,597734.7);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinContent(8,161483.7);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(1,1.156096e+08);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(2,1.156051e+08);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(3,1680688);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(4,118307.9);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(5,65298.19);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(6,42026.66);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(7,15754.17);
   VbbHcc_algoFirst_CutFlow_stack_1->SetBinError(8,5031.495);
   VbbHcc_algoFirst_CutFlow_stack_1->SetEntries(6.890905e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algoFirst_CutFlow_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_1->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_1,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_2 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_2","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(1,1.060862e+07);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(2,1.038581e+07);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(3,861732.6);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(4,59250.66);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(5,25527.73);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(6,8077.729);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(7,3166.882);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinContent(8,1158.226);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(1,992.5127);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(2,975.7484);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(3,354.8514);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(4,93.17441);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(5,60.54835);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(6,33.21193);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(7,20.89584);
   VbbHcc_algoFirst_CutFlow_stack_2->SetBinError(8,12.67993);
   VbbHcc_algoFirst_CutFlow_stack_2->SetEntries(4.224593e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_algoFirst_CutFlow_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_2->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_2,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_3 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_3","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(1,3.063958e+07);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(2,2.906241e+07);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(3,9323660);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(4,974016.9);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(5,421855);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(6,118219.3);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(7,40353.62);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinContent(8,13542.04);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(1,1230.555);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(2,1205.519);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(3,720.6371);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(4,234.4508);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(5,153.4009);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(6,80.33097);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(7,47.0057);
   VbbHcc_algoFirst_CutFlow_stack_3->SetBinError(8,27.25662);
   VbbHcc_algoFirst_CutFlow_stack_3->SetEntries(1.512692e+09);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algoFirst_CutFlow_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_3->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_3,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_4 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_4","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(1,4.250321e+07);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(2,4.247064e+07);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(3,3178486);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(4,66997.87);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(5,26097.55);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(6,11502.71);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(7,3861.584);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinContent(8,1135.789);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(1,9504.357);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(2,9503.191);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(3,1859.273);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(4,171.1078);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(5,109.5067);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(6,76.73487);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(7,43.48118);
   VbbHcc_algoFirst_CutFlow_stack_4->SetBinError(8,23.53684);
   VbbHcc_algoFirst_CutFlow_stack_4->SetEntries(1.102195e+08);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algoFirst_CutFlow_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_4->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_4,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_5 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_5","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(1,1.722113e+08);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(2,1.679289e+08);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(3,9022048);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(4,64632.18);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(5,14123.92);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(6,3778.42);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(7,1622.808);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinContent(8,583.5205);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(1,24832.2);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(2,24775.25);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(3,5015.92);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(4,287.9721);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(5,132.7722);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(6,70.47033);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(7,45.39637);
   VbbHcc_algoFirst_CutFlow_stack_5->SetBinError(8,24.34129);
   VbbHcc_algoFirst_CutFlow_stack_5->SetEntries(3.437712e+08);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algoFirst_CutFlow_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_5->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_5,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_6 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_6","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(1,4362225);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(2,4291043);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(3,87272.12);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(4,608.8253);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(5,116.352);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(6,27.34412);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(7,12.55598);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinContent(8,6.138477);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(1,1103.248);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(2,1094.209);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(3,156.0475);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(4,13.03363);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(5,5.697784);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(6,2.762174);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(7,1.871734);
   VbbHcc_algoFirst_CutFlow_stack_6->SetBinError(8,1.308728);
   VbbHcc_algoFirst_CutFlow_stack_6->SetEntries(3.132843e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algoFirst_CutFlow_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_6->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_6,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_7 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_7","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(1,1730925);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(2,1689960);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(3,43623.08);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(4,806.3315);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(5,313.9756);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(6,137.7894);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(7,64.94534);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinContent(8,23.25745);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(1,616.2647);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(2,608.9286);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(3,97.83322);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(4,13.30102);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(5,8.299962);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(6,5.498397);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(7,3.774871);
   VbbHcc_algoFirst_CutFlow_stack_7->SetBinError(8,2.258964);
   VbbHcc_algoFirst_CutFlow_stack_7->SetEntries(1.579625e+07);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algoFirst_CutFlow_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_7->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_7,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_8 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_8","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(1,606375);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(2,590525.9);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(3,15580.05);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(4,524.8934);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(5,254.3933);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(6,139.7505);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(7,46.42559);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinContent(8,18.94922);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(1,535.9648);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(2,528.9141);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(3,85.91125);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(4,15.76889);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(5,10.97788);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(6,8.136588);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(7,4.689692);
   VbbHcc_algoFirst_CutFlow_stack_8->SetBinError(8,2.996135);
   VbbHcc_algoFirst_CutFlow_stack_8->SetEntries(2561510);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algoFirst_CutFlow_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_8->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_8,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_9 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_9","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(1,13208.32);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(2,13185.12);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(3,1658.732);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(4,226.79);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(5,133.5882);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(6,82.79819);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(7,23.98148);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinContent(8,7.707974);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(1,4.481476);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(2,4.477615);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(3,1.553848);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(4,0.5742708);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(5,0.4415474);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(6,0.3482547);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(7,0.1877119);
   VbbHcc_algoFirst_CutFlow_stack_9->SetBinError(8,0.1068123);
   VbbHcc_algoFirst_CutFlow_stack_9->SetEntries(2.116722e+07);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algoFirst_CutFlow_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_9->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_9,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_10 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_10","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(1,1834.56);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(2,1826.353);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(3,675.3643);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(4,289.6499);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(5,130.4757);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(6,62.43448);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(7,19.53366);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinContent(8,5.931866);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(1,0.8204402);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(2,0.818603);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(3,0.4977944);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(4,0.326);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(5,0.2187993);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(6,0.1513538);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(7,0.08465893);
   VbbHcc_algoFirst_CutFlow_stack_10->SetBinError(8,0.04665268);
   VbbHcc_algoFirst_CutFlow_stack_10->SetEntries(1.32029e+07);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algoFirst_CutFlow_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_10->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_10,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_11 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_11","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(1,655.9875);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(2,655.2967);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(3,90.00114);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(4,5.153111);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(5,2.026284);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(6,1.011045);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(7,0.591524);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinContent(8,0.3705765);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(1,0.9884396);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(2,0.987941);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(3,0.3584112);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(4,0.08557716);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(5,0.05367022);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(6,0.03811767);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(7,0.02936644);
   VbbHcc_algoFirst_CutFlow_stack_11->SetBinError(8,0.02335792);
   VbbHcc_algoFirst_CutFlow_stack_11->SetEntries(1071099);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algoFirst_CutFlow_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_11->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_11,"");
   
   TH1D *VbbHcc_algoFirst_CutFlow_stack_12 = new TH1D("VbbHcc_algoFirst_CutFlow_stack_12","",8,0,8);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(1,91.14);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(2,90.94085);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(3,34.44825);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(4,2.523879);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(5,0.9847134);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(6,0.4591042);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(7,0.261243);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinContent(8,0.1499116);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(1,0.1293978);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(2,0.1292564);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(3,0.07955292);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(4,0.02153311);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(5,0.01345016);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(6,0.009183922);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(7,0.006927792);
   VbbHcc_algoFirst_CutFlow_stack_12->SetBinError(8,0.005247955);
   VbbHcc_algoFirst_CutFlow_stack_12->SetEntries(1202448);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algoFirst_CutFlow_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow_stack_12->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algoFirst_CutFlow_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algoFirst_CutFlow__9 = new TH1D("VbbHcc_algoFirst_CutFlow__9","",8,0,8);
   VbbHcc_algoFirst_CutFlow__9->SetBinContent(1,1.016071e+08);
   VbbHcc_algoFirst_CutFlow__9->SetBinContent(2,1.004155e+08);
   VbbHcc_algoFirst_CutFlow__9->SetBinContent(3,3.456062e+07);
   VbbHcc_algoFirst_CutFlow__9->SetBinContent(4,9539147);
   VbbHcc_algoFirst_CutFlow__9->SetBinContent(5,3048677);
   VbbHcc_algoFirst_CutFlow__9->SetBinContent(6,1052358);
   VbbHcc_algoFirst_CutFlow__9->SetBinContent(7,360214);
   VbbHcc_algoFirst_CutFlow__9->SetBinContent(8,113720);
   VbbHcc_algoFirst_CutFlow__9->SetEntries(2.506973e+08);

   ci = TColor::GetColor("#000099");
   VbbHcc_algoFirst_CutFlow__9->SetLineColor(ci);
   VbbHcc_algoFirst_CutFlow__9->SetLineWidth(2);
   VbbHcc_algoFirst_CutFlow__9->SetMarkerStyle(20);
   VbbHcc_algoFirst_CutFlow__9->SetMarkerSize(1.2);
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetBinLabel(4,"triggers");
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetBinLabel(5,"b-tag #1");
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetBinLabel(6,"b-tag #2");
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetBinLabel(7,"c-tag #1");
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetBinLabel(8,"c-tag #2");
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetRange(1,8);
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow__9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow__9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow__9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow__9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_CutFlow__9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_CutFlow__9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_CutFlow__9->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algoFirst_CutFlow_fx1009[8] = { 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5 };
   Double_t Graph_from_VbbHcc_algoFirst_CutFlow_fy1009[8] = { 1.106055e+12, 1.105947e+12, 2.426958e+09, 2.814203e+07, 6639580, 2036449, 646907.9, 177965.7 };
   Double_t Graph_from_VbbHcc_algoFirst_CutFlow_fex1009[8] = { 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_VbbHcc_algoFirst_CutFlow_fey1009[8] = { 1.156096e+08, 1.156051e+08, 1680697, 118308.7, 65298.63, 42026.88, 15754.38, 5031.7 };
   TGraphErrors *gre = new TGraphErrors(8,Graph_from_VbbHcc_algoFirst_CutFlow_fx1009,Graph_from_VbbHcc_algoFirst_CutFlow_fy1009,Graph_from_VbbHcc_algoFirst_CutFlow_fex1009,Graph_from_VbbHcc_algoFirst_CutFlow_fey1009);
   gre->SetName("Graph_from_VbbHcc_algoFirst_CutFlow");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009 = new TH1F("Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009","",100,0,8.8);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->SetMinimum(155640.6);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->SetMaximum(1.216787e+12);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algoFirst_CutFlow1009);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algoFirst_CutFlow","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algoFirst_CutFlow","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   CutFlow_algoFirst_17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.072578,-0.2774193,7.366936,1.658065);
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
   
   TH1D *data_mc_ratio__10 = new TH1D("data_mc_ratio__10","",8,0,8);
   data_mc_ratio__10->SetBinContent(1,9.186442e-05);
   data_mc_ratio__10->SetBinContent(2,9.079591e-05);
   data_mc_ratio__10->SetBinContent(3,0.01424031);
   data_mc_ratio__10->SetBinContent(4,0.3389645);
   data_mc_ratio__10->SetBinContent(5,0.4591671);
   data_mc_ratio__10->SetBinContent(6,0.5167612);
   data_mc_ratio__10->SetBinContent(7,0.5568243);
   data_mc_ratio__10->SetBinContent(8,0.6389994);
   data_mc_ratio__10->SetBinError(1,9.113503e-09);
   data_mc_ratio__10->SetBinError(2,9.060787e-09);
   data_mc_ratio__10->SetBinError(3,2.422303e-06);
   data_mc_ratio__10->SetBinError(4,0.0001097487);
   data_mc_ratio__10->SetBinError(5,0.0002629754);
   data_mc_ratio__10->SetBinError(6,0.000503742);
   data_mc_ratio__10->SetBinError(7,0.0009277647);
   data_mc_ratio__10->SetBinError(8,0.001894881);
   data_mc_ratio__10->SetMinimum(0.4);
   data_mc_ratio__10->SetMaximum(1.6);
   data_mc_ratio__10->SetEntries(9791.113);
   data_mc_ratio__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__10->SetLineColor(ci);
   data_mc_ratio__10->SetLineWidth(2);
   data_mc_ratio__10->SetMarkerStyle(20);
   data_mc_ratio__10->SetMarkerSize(1.2);
   data_mc_ratio__10->GetXaxis()->SetTitle(""Cut flow"");
   data_mc_ratio__10->GetXaxis()->SetBinLabel(1,"Total");
   data_mc_ratio__10->GetXaxis()->SetBinLabel(2,"MET cut");
   data_mc_ratio__10->GetXaxis()->SetBinLabel(3,"jet cuts");
   data_mc_ratio__10->GetXaxis()->SetBinLabel(4,"triggers");
   data_mc_ratio__10->GetXaxis()->SetBinLabel(5,"b-tag #1");
   data_mc_ratio__10->GetXaxis()->SetBinLabel(6,"b-tag #2");
   data_mc_ratio__10->GetXaxis()->SetBinLabel(7,"c-tag #1");
   data_mc_ratio__10->GetXaxis()->SetBinLabel(8,"c-tag #2");
   data_mc_ratio__10->GetXaxis()->SetRange(1,7);
   data_mc_ratio__10->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__10->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__10->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__10->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__10->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__10->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__10->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__10->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__10->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__10->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__10->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__10->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__10->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__10->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1010[8] = { 0.5, 1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5 };
   Double_t Graph_from_mc_statistical_error_fy1010[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1010[8] = { 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5 };
   Double_t Graph_from_mc_statistical_error_fey1010[8] = { 0.0001045243, 0.0001045304, 0.0006925117, 0.004203985, 0.009834753, 0.02063733, 0.02435336, 0.02827342 };
   gre = new TGraphErrors(8,Graph_from_mc_statistical_error_fx1010,Graph_from_mc_statistical_error_fy1010,Graph_from_mc_statistical_error_fex1010,Graph_from_mc_statistical_error_fey1010);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1010 = new TH1F("Graph_Graph_from_mc_statistical_error1010","",100,0,8.8);
   Graph_Graph_from_mc_statistical_error1010->SetMinimum(0.9660719);
   Graph_Graph_from_mc_statistical_error1010->SetMaximum(1.033928);
   Graph_Graph_from_mc_statistical_error1010->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1010->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1010);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,7,1);
   line->Draw();
   bottomPad->Modified();
   CutFlow_algoFirst_17->cd();
   CutFlow_algoFirst_17->Modified();
   CutFlow_algoFirst_17->cd();
   CutFlow_algoFirst_17->SetSelected(CutFlow_algoFirst_17);
}
