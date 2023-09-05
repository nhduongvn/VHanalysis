#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Sep  5 11:02:21 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(0,0,1,1);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-500.631,1.052419,500140.3);
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
   st->SetMaximum(450076.2);
   
   TH1F *st_stack_192 = new TH1F("st_stack_192","",50,0,1);
   st_stack_192->SetMinimum(0.01);
   st_stack_192->SetMaximum(450076.2);
   st_stack_192->SetDirectory(nullptr);
   st_stack_192->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_192->SetLineColor(ci);
   st_stack_192->SetLineWidth(0);
   st_stack_192->GetXaxis()->SetRange(1,50);
   st_stack_192->GetXaxis()->SetLabelFont(42);
   st_stack_192->GetXaxis()->SetTitleOffset(1);
   st_stack_192->GetXaxis()->SetTitleFont(42);
   st_stack_192->GetYaxis()->SetTitle("Events/0.02");
   st_stack_192->GetYaxis()->SetLabelFont(42);
   st_stack_192->GetYaxis()->SetLabelSize(0.05);
   st_stack_192->GetYaxis()->SetTitleSize(0.057);
   st_stack_192->GetYaxis()->SetTitleOffset(1.2);
   st_stack_192->GetYaxis()->SetTitleFont(42);
   st_stack_192->GetZaxis()->SetLabelFont(42);
   st_stack_192->GetZaxis()->SetTitleOffset(1);
   st_stack_192->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_192);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,174958.8);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,48648.59);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,27635.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,17204.98);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,7008.059);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3148.723);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,3360.211);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1289.425);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,12388.63);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,738.9424);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,326.0843);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,3199.844);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,663.1526);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,144.4608);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,566.8844);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.3242232);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,149.6138);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5.749433);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,36.52968);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,7795.047);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,6585.772);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,5287.808);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,2655.346);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1805.331);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,717.3518);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,916.1031);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,384.5153);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,9943.992);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,369.2174);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,109.9501);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,2923.95);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,435.5889);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,63.05831);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,527.9573);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.3242232);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,102.664);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,5.749433);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,36.52968);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10584);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1163.97);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,337.2424);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,165.353);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,95.27476);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,51.21931);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,34.76453);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,26.60792);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,14.80924);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,10.6336);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,9.15793);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,4.250344);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,3.051719);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,2.272159);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,1.287589);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,1.067682);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4726324);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3518385);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.1238662);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.04497448);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,0.09360742);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,22.64504);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,12.17325);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,8.560535);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,8.38578);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,4.06322);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,3.622297);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,3.293728);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,2.10289);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.889687);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,2.876124);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,1.064412);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.9969809);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.8901344);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.463478);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.6108262);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.3975613);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.2634059);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.07500965);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.04497448);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.09360742);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(15606);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,22952.65);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,7418.254);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,3588.845);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,2057.634);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,1256.007);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,822.3932);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,555.9636);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,378.5721);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,259.0221);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,186.6226);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,122.0202);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,88.27327);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,59.99057);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,37.38449);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,25.33396);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,16.11401);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,10.39442);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,5.997244);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,3.607339);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.8569709);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.2386642);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.1042259);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.06768827);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,59.9311);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,33.36001);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,23.6251);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,17.09322);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,14.06518);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,11.05071);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,8.73482);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,10.39362);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,6.086982);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,7.983291);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,3.928457);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,3.556768);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,3.439686);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,2.294613);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,1.779328);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,1.418923);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,1.137156);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.9087552);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.8977649);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2521913);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.1111374);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.07311472);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.06768827);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(455189);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_3->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_3,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,2978.737);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,814.881);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,380.7091);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,219.1924);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,133.8668);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,75.7523);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,44.89105);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,34.12974);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,22.00273);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,13.28306);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,6.497705);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.805204);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,7.156664);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,2.235032);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,1.119335);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,1.018737);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,1.828979);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.5547864);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,57.82329);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,28.12491);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,20.44179);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,16.83233);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,10.7618);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,7.475164);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,4.935886);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,5.349746);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,3.061752);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.317367);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,1.6203);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.9561845);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,1.77333);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,1.208241);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.8756517);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.6228464);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,1.151243);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.5547864);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(19244);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_4->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_4,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,349.3029);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,103.9321);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,39.93663);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,23.19423);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,20.34983);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,3.109268);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,8.866033);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,1.867813);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.7865761);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,1.387399);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.5261078);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,2.595894);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(13,0.270351);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.7018756);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.614239);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,31.82415);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,12.40395);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,7.593443);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,4.278828);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,10.81568);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,0.7719671);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,4.211732);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.6911399);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.4036503);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.6532681);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.3742477);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,2.362433);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(13,0.2166513);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.4035534);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.4343349);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(2454);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_5->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_5,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_6 = new TH1D("VbbHcc_both_Aplanarity_stack_6","",50,0,1);
   VbbHcc_both_Aplanarity_stack_6->SetBinContent(1,4.253585);
   VbbHcc_both_Aplanarity_stack_6->SetBinError(1,2.355873);
   VbbHcc_both_Aplanarity_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Aplanarity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_6->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_6,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_7 = new TH1D("VbbHcc_both_Aplanarity_stack_7","",50,0,1);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(1,8.026615);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(2,6.2584);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(3,1.301314);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(4,0.6167051);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(5,0.4748496);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(6,2.634386);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(8,0.9532567);
   VbbHcc_both_Aplanarity_stack_7->SetBinContent(15,0.5616047);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(1,2.735303);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(2,2.477791);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(3,0.921597);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(4,0.5137751);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(5,0.4748496);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(6,2.252229);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(8,0.9532567);
   VbbHcc_both_Aplanarity_stack_7->SetBinError(15,0.5616047);
   VbbHcc_both_Aplanarity_stack_7->SetEntries(27);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Aplanarity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_7->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_7,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,52.30492);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,15.61374);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.511073);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,4.157743);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,2.382859);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,1.293974);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,1.545343);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.7468189);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(11,0.2264233);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,4.6239);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,2.628907);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.203027);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,1.283731);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,1.134785);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.7473112);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.7285688);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.5641205);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(11,0.2264233);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(232);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_8->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_8,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_9 = new TH1D("VbbHcc_both_Aplanarity_stack_9","",50,0,1);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(1,51.44622);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(2,14.47112);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(3,6.948955);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(4,3.826252);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(5,2.421837);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(6,1.523471);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(7,1.009921);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(8,0.5986949);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(9,0.3941383);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(10,0.2723074);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(11,0.1745714);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(12,0.1132016);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(13,0.08298492);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(14,0.03916444);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(15,0.04753936);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(16,0.01370816);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(17,0.008635815);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(18,0.002813859);
   VbbHcc_both_Aplanarity_stack_9->SetBinContent(19,0.006695065);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(1,0.5039245);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(2,0.2448057);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(3,0.1743387);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(4,0.1309844);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(5,0.0969475);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(6,0.09468981);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(7,0.06246551);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(8,0.04645289);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(9,0.04055063);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(10,0.03934859);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(11,0.02452648);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(12,0.01876648);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(13,0.01797235);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(14,0.0122483);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(15,0.01602626);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(16,0.008180559);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(17,0.006200412);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(18,0.002813859);
   VbbHcc_both_Aplanarity_stack_9->SetBinError(19,0.006695065);
   VbbHcc_both_Aplanarity_stack_9->SetEntries(27714);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Aplanarity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_9->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_9,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,14.58486);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,4.826997);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.492463);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.456569);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.9117604);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.5864313);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.3945302);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2823947);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1755982);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.1175406);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.07312355);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.05710455);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.03940935);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02792885);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.009293499);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.008176256);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.008403036);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.002613181);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.002050977);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0009960952);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.08940385);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.05106469);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.03665875);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.02788116);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.02215732);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01771228);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01447908);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.01229643);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.009687533);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.007885193);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.00617732);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.005542716);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.004618243);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003900466);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.002212176);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.002132199);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.002117553);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.001213771);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.001056518);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0007074689);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_10->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_10,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_11 = new TH1D("VbbHcc_both_Aplanarity_stack_11","",50,0,1);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(1,0.1318118);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(2,0.03410018);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(3,0.02043204);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(4,0.01078174);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(5,0.006765222);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(6,0.003571179);
   VbbHcc_both_Aplanarity_stack_11->SetBinContent(11,0.003099963);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(1,0.0187929);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(2,0.009893251);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(3,0.008628845);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(4,0.004860976);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(5,0.004095295);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(6,0.003571179);
   VbbHcc_both_Aplanarity_stack_11->SetBinError(11,0.003099963);
   VbbHcc_both_Aplanarity_stack_11->SetEntries(84);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_11->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_11,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.07273648);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01895017);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.007506824);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.006660641);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.00241113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.005823833);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.001801525);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0006903421);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.00122373);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0006151949);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.0002514301);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(12,0.0003694915);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(13,0.001056245);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.005801057);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.002674022);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001782229);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.001609786);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0008629491);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.001973892);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.000833669);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0004923778);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0006248787);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0004728634);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0002514301);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(12,0.0003694915);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(13,0.001056245);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(330);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_12->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Aplanarity__383 = new TH1D("VbbHcc_both_Aplanarity__383","",50,0,1);
   VbbHcc_both_Aplanarity__383->SetBinContent(1,195897);
   VbbHcc_both_Aplanarity__383->SetBinContent(2,56672);
   VbbHcc_both_Aplanarity__383->SetBinContent(3,26410);
   VbbHcc_both_Aplanarity__383->SetBinContent(4,14760);
   VbbHcc_both_Aplanarity__383->SetBinContent(5,8936);
   VbbHcc_both_Aplanarity__383->SetBinContent(6,5563);
   VbbHcc_both_Aplanarity__383->SetBinContent(7,3696);
   VbbHcc_both_Aplanarity__383->SetBinContent(8,2407);
   VbbHcc_both_Aplanarity__383->SetBinContent(9,1662);
   VbbHcc_both_Aplanarity__383->SetBinContent(10,1150);
   VbbHcc_both_Aplanarity__383->SetBinContent(11,783);
   VbbHcc_both_Aplanarity__383->SetBinContent(12,549);
   VbbHcc_both_Aplanarity__383->SetBinContent(13,355);
   VbbHcc_both_Aplanarity__383->SetBinContent(14,199);
   VbbHcc_both_Aplanarity__383->SetBinContent(15,153);
   VbbHcc_both_Aplanarity__383->SetBinContent(16,99);
   VbbHcc_both_Aplanarity__383->SetBinContent(17,62);
   VbbHcc_both_Aplanarity__383->SetBinContent(18,33);
   VbbHcc_both_Aplanarity__383->SetBinContent(19,18);
   VbbHcc_both_Aplanarity__383->SetBinContent(20,13);
   VbbHcc_both_Aplanarity__383->SetBinContent(21,3);
   VbbHcc_both_Aplanarity__383->SetBinContent(22,1);
   VbbHcc_both_Aplanarity__383->SetBinContent(24,1);
   VbbHcc_both_Aplanarity__383->SetEntries(319471);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity__383->SetLineColor(ci);
   VbbHcc_both_Aplanarity__383->SetLineWidth(2);
   VbbHcc_both_Aplanarity__383->SetMarkerStyle(20);
   VbbHcc_both_Aplanarity__383->SetMarkerSize(1.2);
   VbbHcc_both_Aplanarity__383->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity__383->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__383->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__383->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__383->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__383->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__383->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity__383->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity__383->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity__383->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Aplanarity_fx1383[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fy1383[50] = { 202534.3, 57364.12, 31825.33, 19610.35, 8475.702, 4090.79, 3999.491, 1721.386, 12681.65, 949.7839, 459.8562, 3297.741, 732.9658, 186.1369, 595.638, 17.95149, 162.2061,
   12.43076, 40.14576, 0.9019453, 0.2396603, 0.1042259, 0.1612957, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fex1383[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_VbbHcc_both_Aplanarity_fey1383[50] = { 7795.592, 6585.941, 5287.913, 2655.471, 1805.456, 717.4893, 916.1739, 384.7009, 9943.994, 369.3228, 110.0382, 2923.954, 435.607, 63.1146, 527.9618, 1.632338, 102.6771,
   5.84767, 36.54071, 0.2561702, 0.1111397, 0.07311472, 0.1155165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_both_Aplanarity_fx1383,Graph_from_VbbHcc_both_Aplanarity_fy1383,Graph_from_VbbHcc_both_Aplanarity_fex1383,Graph_from_VbbHcc_both_Aplanarity_fey1383);
   gre->SetName("Graph_from_VbbHcc_both_Aplanarity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Aplanarity1383 = new TH1F("Graph_Graph_from_VbbHcc_both_Aplanarity1383","",100,0,1.1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->SetMinimum(0);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->SetMaximum(231362.9);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->SetDirectory(nullptr);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VbbHcc_both_Aplanarity1383->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Aplanarity1383);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Aplanarity","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Aplanarity_both_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__384 = new TH1D("data_mc_ratio__384","",50,0,1);
   data_mc_ratio__384->SetBinContent(1,0.9672288);
   data_mc_ratio__384->SetBinContent(2,0.9879346);
   data_mc_ratio__384->SetBinContent(3,0.8298421);
   data_mc_ratio__384->SetBinContent(4,0.7526636);
   data_mc_ratio__384->SetBinContent(5,1.054308);
   data_mc_ratio__384->SetBinContent(6,1.359884);
   data_mc_ratio__384->SetBinContent(7,0.9241175);
   data_mc_ratio__384->SetBinContent(8,1.398292);
   data_mc_ratio__384->SetBinContent(9,0.1310555);
   data_mc_ratio__384->SetBinContent(10,1.210802);
   data_mc_ratio__384->SetBinContent(11,1.702706);
   data_mc_ratio__384->SetBinContent(12,0.1664776);
   data_mc_ratio__384->SetBinContent(13,0.4843337);
   data_mc_ratio__384->SetBinContent(14,1.069106);
   data_mc_ratio__384->SetBinContent(15,0.2568674);
   data_mc_ratio__384->SetBinContent(16,5.514863);
   data_mc_ratio__384->SetBinContent(17,0.3822299);
   data_mc_ratio__384->SetBinContent(18,2.654706);
   data_mc_ratio__384->SetBinContent(19,0.4483661);
   data_mc_ratio__384->SetBinContent(20,14.41329);
   data_mc_ratio__384->SetBinContent(21,12.51772);
   data_mc_ratio__384->SetBinContent(22,9.594547);
   data_mc_ratio__384->SetBinError(1,0.002185321);
   data_mc_ratio__384->SetBinError(2,0.00414996);
   data_mc_ratio__384->SetBinError(3,0.005106358);
   data_mc_ratio__384->SetBinError(4,0.006195235);
   data_mc_ratio__384->SetBinError(5,0.01115311);
   data_mc_ratio__384->SetBinError(6,0.01823255);
   data_mc_ratio__384->SetBinError(7,0.01520062);
   data_mc_ratio__384->SetBinError(8,0.02850099);
   data_mc_ratio__384->SetBinError(9,0.003214696);
   data_mc_ratio__384->SetBinError(10,0.03570459);
   data_mc_ratio__384->SetBinError(11,0.06084976);
   data_mc_ratio__384->SetBinError(12,0.00710509);
   data_mc_ratio__384->SetBinError(13,0.02570576);
   data_mc_ratio__384->SetBinError(14,0.0757869);
   data_mc_ratio__384->SetBinError(15,0.0207665);
   data_mc_ratio__384->SetBinError(16,0.5542645);
   data_mc_ratio__384->SetBinError(17,0.04854324);
   data_mc_ratio__384->SetBinError(18,0.4621249);
   data_mc_ratio__384->SetBinError(19,0.1056809);
   data_mc_ratio__384->SetBinError(20,3.997528);
   data_mc_ratio__384->SetBinError(21,7.227107);
   data_mc_ratio__384->SetBinError(22,9.594547);
   data_mc_ratio__384->SetMinimum(0.4);
   data_mc_ratio__384->SetMaximum(1.6);
   data_mc_ratio__384->SetEntries(13.3287);
   data_mc_ratio__384->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__384->SetLineColor(ci);
   data_mc_ratio__384->SetLineWidth(2);
   data_mc_ratio__384->SetMarkerStyle(20);
   data_mc_ratio__384->SetMarkerSize(1.2);
   data_mc_ratio__384->GetXaxis()->SetTitle("Aplanarity");
   data_mc_ratio__384->GetXaxis()->SetRange(1,50);
   data_mc_ratio__384->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__384->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__384->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__384->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__384->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__384->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__384->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__384->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__384->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__384->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1384[50] = { 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13, 0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33,
   0.35, 0.37, 0.39, 0.41, 0.43, 0.45, 0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65,
   0.67, 0.69, 0.71, 0.73, 0.75, 0.77, 0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97,
   0.99 };
   Double_t Graph_from_mc_statistical_error_fy1384[50] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1 };
   Double_t Graph_from_mc_statistical_error_fex1384[50] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01 };
   Double_t Graph_from_mc_statistical_error_fey1384[50] = { 0.03849023, 0.1148094, 0.1661542, 0.1354117, 0.2130155, 0.1753914, 0.2290726, 0.2234833, 0.7841248, 0.3888493, 0.2392882, 0.8866534, 0.5943075, 0.3390763, 0.8863803, 0.09093051, 0.6330039,
   0.4704194, 0.9102009, 0.2840197, 0.4637382, 0.7015026, 0.7161782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0 };
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1384,Graph_from_mc_statistical_error_fy1384,Graph_from_mc_statistical_error_fex1384,Graph_from_mc_statistical_error_fey1384);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1384 = new TH1F("Graph_Graph_from_mc_statistical_error1384","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1384->SetMinimum(0.0808192);
   Graph_Graph_from_mc_statistical_error1384->SetMaximum(2.092241);
   Graph_Graph_from_mc_statistical_error1384->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1384->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1384->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1384->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1384);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
