#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_jets_all_18()
{
//=========Macro generated from canvas: nB_medium_jets_all_18/nB_medium_jets_all_18
//=========  (Mon Dec 12 10:49:50 2022) by ROOT version 6.26/06
   TCanvas *nB_medium_jets_all_18 = new TCanvas("nB_medium_jets_all_18", "nB_medium_jets_all_18",0,0,600,600);
   nB_medium_jets_all_18->SetHighLightColor(2);
   nB_medium_jets_all_18->Range(-2.683529,-2.440208e+10,11.21633,1.789486e+11);
   nB_medium_jets_all_18->SetFillColor(0);
   nB_medium_jets_all_18->SetFillStyle(4000);
   nB_medium_jets_all_18->SetBorderMode(0);
   nB_medium_jets_all_18->SetBorderSize(2);
   nB_medium_jets_all_18->SetLeftMargin(0.15709);
   nB_medium_jets_all_18->SetRightMargin(0.1234783);
   nB_medium_jets_all_18->SetBottomMargin(0.12);
   nB_medium_jets_all_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_18->SetFrameBorderMode(0);
   nB_medium_jets_all_18->SetFrameFillStyle(1000);
   nB_medium_jets_all_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.586135e+11);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",10,-0.5,9.5);
   st_stack_63->SetMinimum(0);
   st_stack_63->SetMaximum(1.586135e+11);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   st_stack_63->GetXaxis()->SetRange(1,10);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/1.0");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_1 = new TH1D("VbbHcc_jets_all_nB_medium_stack_1","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(1,1.057102e+11);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(2,2.019384e+10);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(3,3.831309e+09);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(4,3.851026e+08);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(5,3.272238e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(6,2156038);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(7,115389.1);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(8,8215.858);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinContent(9,494.1879);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(1,1.413538e+07);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(2,6005969);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(3,2580798);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(4,785928.9);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(5,231552.2);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(6,52902.58);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(7,11508.58);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(8,3325.54);
   VbbHcc_jets_all_nB_medium_stack_1->SetBinError(9,377.462);
   VbbHcc_jets_all_nB_medium_stack_1->SetEntries(2.217035e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_nB_medium_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_1,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_2 = new TH1D("VbbHcc_jets_all_nB_medium_stack_2","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(1,3548118);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(2,9924099);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(3,4910983);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(4,777028.5);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(5,71107.74);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(6,5220.985);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(7,359.4209);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(8,26.53498);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(9,2.060182);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinContent(10,0.3850675);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(1,768.4598);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(2,1317.696);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(3,941.6631);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(4,393.6481);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(5,123.5589);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(6,33.47477);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(7,8.707607);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(8,2.40628);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(9,0.7747642);
   VbbHcc_jets_all_nB_medium_stack_2->SetBinError(10,0.1579841);
   VbbHcc_jets_all_nB_medium_stack_2->SetEntries(2.46127e+08);

   ci = TColor::GetColor("#660066");
   VbbHcc_jets_all_nB_medium_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_2,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_3 = new TH1D("VbbHcc_jets_all_nB_medium_stack_3","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(1,3598327);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(2,1.796988e+07);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(3,2.49406e+07);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(4,6307612);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(5,818333.5);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(6,77436.4);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(7,6477.164);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(8,560.3567);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(9,56.96811);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(10,7.934423);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinContent(11,1.20899);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(1,566.7945);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(2,1271.845);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(3,1502.872);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(4,755.2548);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(5,270.2764);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(6,82.70119);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(7,24.1913);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(8,7.110584);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(9,2.309684);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(10,0.8453372);
   VbbHcc_jets_all_nB_medium_stack_3->SetBinError(11,0.3304789);
   VbbHcc_jets_all_nB_medium_stack_3->SetEntries(7.666522e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_jets_all_nB_medium_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_3->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_3->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_3,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_4 = new TH1D("VbbHcc_jets_all_nB_medium_stack_4","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(1,4746462);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(2,1889879);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(3,925477.3);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(4,165267);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(5,27152.43);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(6,2643.172);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(7,234.1849);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(8,14.9903);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinContent(10,0.7645965);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(1,1828.958);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(2,1149.422);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(3,808.3086);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(4,335.5445);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(5,133.4881);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(6,41.15215);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(7,13.25979);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(8,2.932402);
   VbbHcc_jets_all_nB_medium_stack_4->SetBinError(10,0.5893144);
   VbbHcc_jets_all_nB_medium_stack_4->SetEntries(1.321133e+07);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_jets_all_nB_medium_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_4->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_4->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_4,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_5 = new TH1D("VbbHcc_jets_all_nB_medium_stack_5","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(1,1.43037e+07);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(2,3811822);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(3,605574.4);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(4,69147.45);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(5,5970.351);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(6,479.3722);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(7,32.13165);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinContent(8,3.097118);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(1,6617.446);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(2,3363.437);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(3,1339.652);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(4,452.127);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(5,128.6125);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(6,35.14009);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(7,8.960087);
   VbbHcc_jets_all_nB_medium_stack_5->SetBinError(8,3.097118);
   VbbHcc_jets_all_nB_medium_stack_5->SetEntries(7460725);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_jets_all_nB_medium_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_5->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_5->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_5,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_6 = new TH1D("VbbHcc_jets_all_nB_medium_stack_6","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(1,4076973);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(2,904408.4);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(3,92861.75);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(4,6533.569);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(5,397.8283);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(6,22.37647);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinContent(7,2.015618);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(1,1273.954);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(2,590.9783);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(3,185.2253);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(4,49.46842);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(5,12.20765);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(6,2.716884);
   VbbHcc_jets_all_nB_medium_stack_6->SetBinError(7,0.8270922);
   VbbHcc_jets_all_nB_medium_stack_6->SetEntries(1.542487e+07);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_jets_all_nB_medium_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_6->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_6->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_6,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_7 = new TH1D("VbbHcc_jets_all_nB_medium_stack_7","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(1,1329144);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(2,370131.5);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(3,118003.2);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(4,14044.48);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(5,942.7019);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(6,49.29124);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinContent(7,2.678604);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(1,684.0842);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(2,355.8519);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(3,203.3243);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(4,68.55182);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(5,17.1552);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(6,3.777032);
   VbbHcc_jets_all_nB_medium_stack_7->SetBinError(7,0.9680472);
   VbbHcc_jets_all_nB_medium_stack_7->SetEntries(6302940);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_jets_all_nB_medium_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_7->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_7->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_7,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_8 = new TH1D("VbbHcc_jets_all_nB_medium_stack_8","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(1,526636.9);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(2,177531.6);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(3,84079.56);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(4,15018.58);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(5,2984.785);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(6,228.3516);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(7,13.88139);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinContent(8,0.4257746);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(1,417.7472);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(2,241.7695);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(3,167.7811);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(4,69.95845);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(5,30.31119);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(6,8.46828);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(7,1.930358);
   VbbHcc_jets_all_nB_medium_stack_8->SetBinError(8,0.3016442);
   VbbHcc_jets_all_nB_medium_stack_8->SetEntries(2933859);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_jets_all_nB_medium_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_8->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_8->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_8,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_9 = new TH1D("VbbHcc_jets_all_nB_medium_stack_9","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(1,2714.803);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(2,8120.215);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(3,9345.583);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(4,3072.676);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(5,1056.225);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(6,96.15496);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(7,8.593778);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(8,0.478019);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(9,0.01942141);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinContent(10,0.00320311);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(1,3.039041);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(2,5.234396);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(3,5.563288);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(4,3.143948);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(5,1.847332);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(6,0.5411842);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(7,0.1881646);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(8,0.03536904);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(9,0.007237831);
   VbbHcc_jets_all_nB_medium_stack_9->SetBinError(10,0.00320311);
   VbbHcc_jets_all_nB_medium_stack_9->SetEntries(9973110);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_jets_all_nB_medium_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_9->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_9->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_9,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_10 = new TH1D("VbbHcc_jets_all_nB_medium_stack_10","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(1,255.7786);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(2,1058.941);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(3,1236.04);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(4,416.0958);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(5,149.8968);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(6,12.38736);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(7,1.001104);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(8,0.05872784);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinContent(9,0.003901429);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(1,0.4019592);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(2,0.8224309);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(3,0.8903297);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(4,0.5163955);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(5,0.3104075);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(6,0.08894845);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(7,0.02528936);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(8,0.006120169);
   VbbHcc_jets_all_nB_medium_stack_10->SetBinError(9,0.001595203);
   VbbHcc_jets_all_nB_medium_stack_10->SetEntries(4977633);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_jets_all_nB_medium_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_10->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_10->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_10,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_11 = new TH1D("VbbHcc_jets_all_nB_medium_stack_11","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(1,539.2713);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(2,339.7143);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(3,142.5699);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(4,36.79242);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(5,5.285607);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(6,0.4634606);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinContent(7,0.0518519);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(1,1.226568);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(2,0.9660618);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(3,0.6233063);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(4,0.3169349);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(5,0.1190294);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(6,0.03500498);
   VbbHcc_jets_all_nB_medium_stack_11->SetBinError(7,0.01134938);
   VbbHcc_jets_all_nB_medium_stack_11->SetEntries(486910);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_nB_medium_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_11->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_11->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_11,"");
   
   TH1D *VbbHcc_jets_all_nB_medium_stack_12 = new TH1D("VbbHcc_jets_all_nB_medium_stack_12","",10,-0.5,9.5);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(1,67.76001);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(2,47.27365);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(3,23.94109);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(4,7.207303);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(5,1.184617);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(6,0.1306075);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(7,0.009868836);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinContent(8,0.0005274433);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(1,0.1503602);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(2,0.1254611);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(3,0.08924418);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(4,0.04887344);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(5,0.01982619);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(6,0.006592341);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(7,0.001765527);
   VbbHcc_jets_all_nB_medium_stack_12->SetBinError(8,0.0004447936);
   VbbHcc_jets_all_nB_medium_stack_12->SetEntries(496915);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_nB_medium_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_nB_medium_stack_12->SetLineColor(ci);
   VbbHcc_jets_all_nB_medium_stack_12->GetXaxis()->SetRange(1,10);
   VbbHcc_jets_all_nB_medium_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_nB_medium_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_nB_medium_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_nB_medium_stack_12,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_2","Single Top","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_nB_medium_stack_1","QCD","F");

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
   nB_medium_jets_all_18->Modified();
   nB_medium_jets_all_18->cd();
   nB_medium_jets_all_18->SetSelected(nB_medium_jets_all_18);
}
