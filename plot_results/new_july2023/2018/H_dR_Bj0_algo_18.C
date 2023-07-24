void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Mon Jul 24 10:11:48 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(0,0,1,1);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetFillStyle(4000);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-212.2403,6.314516,212038);
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
   st->SetMaximum(181726.7);
   
   TH1F *st_stack_139 = new TH1F("st_stack_139","",30,0,6);
   st_stack_139->SetMinimum(0.01);
   st_stack_139->SetMaximum(190813);
   st_stack_139->SetDirectory(0);
   st_stack_139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_139->SetLineColor(ci);
   st_stack_139->GetXaxis()->SetRange(1,30);
   st_stack_139->GetXaxis()->SetLabelFont(42);
   st_stack_139->GetXaxis()->SetLabelSize(0.035);
   st_stack_139->GetXaxis()->SetTitleSize(0.035);
   st_stack_139->GetXaxis()->SetTitleFont(42);
   st_stack_139->GetYaxis()->SetTitle("Events/0.2");
   st_stack_139->GetYaxis()->SetLabelFont(42);
   st_stack_139->GetYaxis()->SetLabelSize(0.05);
   st_stack_139->GetYaxis()->SetTitleSize(0.057);
   st_stack_139->GetYaxis()->SetTitleOffset(1.2);
   st_stack_139->GetYaxis()->SetTitleFont(42);
   st_stack_139->GetZaxis()->SetLabelFont(42);
   st_stack_139->GetZaxis()->SetLabelSize(0.035);
   st_stack_139->GetZaxis()->SetTitleSize(0.035);
   st_stack_139->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_139);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(1,31179.72);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(2,50541.23);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(3,33985.82);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(4,17263.98);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(5,14001.79);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(6,9180.315);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(7,4748.565);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(8,7409.32);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(9,4398.558);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(10,2975.262);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(11,3052.834);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(12,2287.948);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(13,1006.619);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(14,1137.384);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(15,403.8924);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(16,1026.851);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(17,260.4224);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(18,248.8819);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(19,131.8058);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(20,48.81887);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(21,27.07475);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(22,29.93019);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(23,29.29908);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinContent(27,5.330624);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(1,1690.616);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(2,2537.785);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(3,2883.063);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(4,1567.795);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(5,1549.906);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(6,1232.402);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(7,564.6739);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(8,1912.64);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(9,869.4604);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(10,629.5606);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(11,787.6275);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(12,616.7127);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(13,147.0345);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(14,368.5771);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(15,82.28018);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(16,493.7101);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(17,77.11762);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(18,76.74527);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(19,54.65477);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(20,22.388);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(21,16.27326);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(22,29.30588);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(23,29.29908);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetBinError(27,5.330624);
   VbbHcc_algo_H_dR_Bj0_stack_1->SetEntries(13324);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(1,157.5268);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(2,441.3471);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(3,308.0092);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(4,195.0527);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(5,132.3135);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(6,101.3437);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(7,73.48423);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(8,71.15817);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(9,57.04421);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(10,49.91128);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(11,43.16117);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(12,33.04411);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(13,25.06851);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(14,20.16508);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(15,13.53538);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(16,9.027642);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(17,7.839096);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(18,6.305466);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(19,3.603936);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(20,2.082695);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(21,1.312579);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(22,1.140342);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(23,0.5481446);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(24,0.1694141);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(25,0.1024769);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(26,0.05123843);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(27,0.05908785);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(28,0.05123843);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinContent(29,0.05123843);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(1,5.317472);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(2,8.17274);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(3,6.610601);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(4,5.235835);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(5,4.340171);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(6,3.767858);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(7,3.084429);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(8,3.184689);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(9,2.769406);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(10,2.529569);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(11,2.376184);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(12,2.053718);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(13,1.786558);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(14,1.674654);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(15,1.340363);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(16,1.011652);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(17,0.9525327);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(18,0.9997346);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(19,0.662244);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(20,0.5399101);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(21,0.3648646);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(22,0.4255078);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(23,0.3019519);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(24,0.09802104);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(25,0.07246208);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(26,0.05123843);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(27,0.05908785);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(28,0.05123843);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetBinError(29,0.05123843);
   VbbHcc_algo_H_dR_Bj0_stack_2->SetEntries(21685);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(1,1383.277);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(2,4472.681);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(3,3475.307);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(4,2297.444);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(5,1489.613);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(6,1053.477);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(7,834.0113);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(8,685.8884);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(9,564.7548);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(10,457.3655);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(11,359.6943);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(12,304.0575);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(13,260.1425);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(14,214.0958);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(15,163.9074);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(16,133.4331);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(17,98.8436);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(18,71.83012);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(19,48.35367);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(20,31.57903);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(21,16.77284);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(22,10.43709);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(23,5.582344);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(24,4.1107);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(25,2.132904);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(26,1.841091);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(27,1.002432);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(28,1.008087);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(29,0.5012159);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(30,0.2872188);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinContent(31,0.8644838);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(1,9.018011);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(2,16.30278);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(3,14.45936);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(4,11.77399);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(5,9.478613);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(6,7.958338);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(7,7.09502);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(8,6.44001);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(9,5.85166);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(10,5.271464);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(11,4.676705);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(12,4.302131);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(13,3.98633);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(14,3.618828);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(15,3.171756);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(16,2.854049);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(17,2.459944);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(18,2.081221);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(19,1.71394);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(20,1.388848);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(21,1.002557);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(22,0.7983534);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(23,0.5759488);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(24,0.4847364);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(25,0.3532441);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(26,0.3234543);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(27,0.2534248);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(28,0.241994);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(29,0.1791984);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(30,0.1318953);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetBinError(31,0.2221657);
   VbbHcc_algo_H_dR_Bj0_stack_3->SetEntries(319331);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(1,229.0415);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(2,451.5669);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(3,247.1706);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(4,171.6924);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(5,110.1098);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(6,76.51172);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(7,50.06661);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(8,50.35109);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(9,36.17661);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(10,30.6433);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(11,16.17547);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(12,22.21158);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(13,18.74236);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(14,11.47279);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(15,14.49468);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(16,5.358414);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(17,4.101707);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(18,5.040913);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(19,1.75982);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(20,0.7144215);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(22,0.6152722);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(23,4.995385);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(24,0.09257296);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinContent(27,0.1257783);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(1,7.155858);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(2,17.30245);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(3,9.66808);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(4,11.3252);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(5,8.868686);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(6,8.254791);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(7,3.821794);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(8,4.018604);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(9,3.277861);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(10,3.233212);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(11,2.267337);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(12,6.023357);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(13,4.613721);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(14,4.274277);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(15,4.500207);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(16,1.374587);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(17,1.176678);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(18,1.430397);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(19,0.7537895);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(20,0.272927);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(22,0.5053954);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(23,4.075617);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(24,0.09257296);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetBinError(27,0.1257783);
   VbbHcc_algo_H_dR_Bj0_stack_4->SetEntries(8300);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(1,133.0749);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(2,218.4768);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(3,131.7815);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(4,85.58238);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(5,62.02642);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(6,36.3102);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(7,29.82756);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(8,18.87959);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(9,11.29243);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(10,18.82816);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(11,11.15619);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(12,15.08973);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(13,7.515865);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(14,3.658115);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(15,3.376399);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(16,3.255783);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(17,2.52884);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(18,0.1637041);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(19,0.7673492);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinContent(22,0.4235731);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(1,9.810508);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(2,14.77941);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(3,15.44088);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(4,13.61995);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(5,12.83917);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(6,5.954118);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(7,6.110728);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(8,4.43688);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(9,3.197976);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(10,10.77604);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(11,3.761487);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(12,4.379489);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(13,3.09297);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(14,2.160528);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(15,2.161603);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(16,2.167317);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(17,2.104234);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(18,0.1137406);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(19,0.4726269);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetBinError(22,0.4235731);
   VbbHcc_algo_H_dR_Bj0_stack_5->SetEntries(3417);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(1,0.5780967);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(3,0.5780967);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(4,0.2890483);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(5,0.5780967);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinContent(6,0.2890483);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(1,0.4087761);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(3,0.4087761);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(4,0.2890483);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(5,0.4087761);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetBinError(6,0.2890483);
   VbbHcc_algo_H_dR_Bj0_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,4.561272);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,6.427248);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,3.52462);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,1.243983);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,0.4146611);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,0.8293223);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,0.8293223);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,0.2073306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,0.6219917);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,0.2073306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(15,0.2073306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,0.9724666);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,1.154368);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,0.8548458);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,0.5078541);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.2932097);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.4146611);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.4146611);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,0.2073306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.3591071);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.2073306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(15,0.2073306);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,4.121785);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,8.449659);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,2.88525);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,0.6182678);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,0.824357);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,0.6182678);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,0.4121785);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,0.2060893);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,0.6182678);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,0.2060893);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,1.030446);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,0.2060893);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,0.2060893);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,0.9216592);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,1.319615);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,0.7711154);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,0.3569571);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,0.4121785);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,0.3569571);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,0.2914542);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,0.2060893);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,0.3569571);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,0.2060893);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,0.4608296);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.2060893);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.2060893);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(1,2.80465);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(2,4.278978);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(3,1.622903);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(4,0.8411665);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(5,0.5143002);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(6,0.3862966);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(7,0.2902939);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(8,0.2445783);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(9,0.1942912);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(10,0.1142889);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(11,0.1485756);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(12,0.10286);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(13,0.1074316);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(14,0.08914537);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(15,0.05714447);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(16,0.04571557);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(17,0.0320009);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(18,0.009143115);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(19,0.01828623);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(21,0.006857336);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(22,0.002285779);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(23,0.002285779);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinContent(24,0.002285779);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(1,0.08006753);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(2,0.09889791);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(3,0.06090646);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(4,0.04384884);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(5,0.03428668);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(6,0.02971512);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(7,0.02575942);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(8,0.02364428);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(9,0.02107384);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(10,0.0161629);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(11,0.01842854);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(12,0.01533347);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(13,0.01567051);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(14,0.01427468);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(15,0.01142889);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(16,0.01022231);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(17,0.008552601);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(18,0.004571557);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(19,0.006465158);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(21,0.003959085);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(22,0.002285779);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(23,0.002285779);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetBinError(24,0.002285779);
   VbbHcc_algo_H_dR_Bj0_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(1,1.362191);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(2,3.283565);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(3,1.763396);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(4,0.9377355);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(5,0.5341456);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(6,0.3737827);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(7,0.29688);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(8,0.2211697);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(9,0.1830164);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(10,0.1347287);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(11,0.09776772);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(12,0.0894217);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(13,0.06796049);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(14,0.07094121);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(15,0.07094121);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(16,0.04828772);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(17,0.03696097);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(18,0.02146121);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(19,0.01669205);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(20,0.01013446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(21,0.007153736);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(22,0.002980723);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(23,0.002384579);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(24,0.001192289);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(25,0.0005961446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(26,0.001192289);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(27,0.0005961446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinContent(28,0.0005961446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(1,0.02849671);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(2,0.04424341);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(3,0.03242282);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(4,0.02364373);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(5,0.01784455);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(6,0.01492744);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(7,0.01330351);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(8,0.01148256);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(9,0.0104453);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(10,0.008962019);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(11,0.007634376);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(12,0.007301251);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(13,0.006365083);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(14,0.00650317);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(15,0.00650317);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(16,0.005365302);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(17,0.004694048);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(18,0.003576868);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(19,0.003154501);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(20,0.002457967);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(21,0.002065106);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(22,0.00133302);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(23,0.001192289);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(24,0.0008430758);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(25,0.0005961446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(26,0.0008430758);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(27,0.0005961446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetBinError(28,0.0005961446);
   VbbHcc_algo_H_dR_Bj0_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.09330624);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.238955);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.09330624);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.047791);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.02503338);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.009103048);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.006827286);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.009103048);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.006827286);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(20,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.01457199);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.02331962);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01457199);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.01042885);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.007547848);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.003941735);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.003218413);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.003218413);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.004551524);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.003218413);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.003941735);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.003218413);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(20,0.003218413);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.01678078);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.07970871);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.0485444);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.01977735);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.007791077);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.004794509);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.005393822);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.001797941);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.001198627);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.002397254);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.001198627);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.001797941);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.0008989704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(20,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.002242426);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.004887254);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.003814008);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.002434423);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.001527956);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.001198627);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.001271336);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.0007340063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.0008475574);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.0004237787);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.0004237787);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0007340063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0005190208);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(20,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj0__277 = new TH1D("VbbHcc_algo_H_dR_Bj0__277","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(1,32955);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(2,81777);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(3,54460);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(4,34395);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(5,22611);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(6,16392);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(7,12346);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(8,10134);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(9,8347);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(10,6659);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(11,5353);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(12,4382);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(13,3441);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(14,2694);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(15,2137);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(16,1583);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(17,1111);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(18,829);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(19,553);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(20,330);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(21,212);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(22,142);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(23,85);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(24,51);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(25,29);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(26,19);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(27,9);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(28,9);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(29,10);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(30,4);
   VbbHcc_algo_H_dR_Bj0__277->SetBinContent(31,12);
   VbbHcc_algo_H_dR_Bj0__277->SetEntries(303100);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj0__277->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj0__277->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj0__277->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj0__277->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj0__277->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj0__277->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__277->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__277->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__277->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__277->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__277->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__277->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__277->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0__277->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__277->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__277->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0__277->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0__277->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__277->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fx1277[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fy1277[30] = {
   33096.17,
   56148.06,
   38158.6,
   20017.75,
   15798.75,
   10450.47,
   5737.795,
   8236.483,
   5069.45,
   3532.477,
   3484.303,
   2662.752,
   1318.471,
   1387.147,
   599.5503,
   1178.022,
   373.8052,
   332.2573,
   186.3264,
   83.21,
   45.17418,
   42.55174,
   40.42963,
   4.376165,
   2.235977,
   1.893522,
   6.518519,
   1.059921,
   0.5524544,
   0.2872188};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fex1277[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj0_fey1277[30] = {
   1690.693,
   2537.953,
   2883.165,
   1567.948,
   1550.02,
   1232.476,
   564.7731,
   1912.663,
   869.4967,
   629.6883,
   787.6573,
   616.7761,
   147.2044,
   368.6299,
   82.50365,
   493.7261,
   77.20038,
   76.7934,
   54.69288,
   22.43919,
   16.3082,
   29.32725,
   29.58834,
   0.5031433,
   0.3606002,
   0.3274886,
   5.338454,
   0.2473597,
   0.1863798,
   0.1318953};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj0_fx1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fy1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fex1277,Graph_from_VbbHcc_algo_H_dR_Bj0_fey1277);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetMinimum(0.1397911);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetMaximum(64554.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj01277);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_algo_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__278 = new TH1D("data_mc_ratio__278","",30,0,6);
   data_mc_ratio__278->SetBinContent(1,0.9957345);
   data_mc_ratio__278->SetBinContent(2,1.456453);
   data_mc_ratio__278->SetBinContent(3,1.427201);
   data_mc_ratio__278->SetBinContent(4,1.718225);
   data_mc_ratio__278->SetBinContent(5,1.431189);
   data_mc_ratio__278->SetBinContent(6,1.568542);
   data_mc_ratio__278->SetBinContent(7,2.151697);
   data_mc_ratio__278->SetBinContent(8,1.23038);
   data_mc_ratio__278->SetBinContent(9,1.64653);
   data_mc_ratio__278->SetBinContent(10,1.885079);
   data_mc_ratio__278->SetBinContent(11,1.536319);
   data_mc_ratio__278->SetBinContent(12,1.645666);
   data_mc_ratio__278->SetBinContent(13,2.609841);
   data_mc_ratio__278->SetBinContent(14,1.942116);
   data_mc_ratio__278->SetBinContent(15,3.564338);
   data_mc_ratio__278->SetBinContent(16,1.343778);
   data_mc_ratio__278->SetBinContent(17,2.972136);
   data_mc_ratio__278->SetBinContent(18,2.495055);
   data_mc_ratio__278->SetBinContent(19,2.967909);
   data_mc_ratio__278->SetBinContent(20,3.965869);
   data_mc_ratio__278->SetBinContent(21,4.692946);
   data_mc_ratio__278->SetBinContent(22,3.337114);
   data_mc_ratio__278->SetBinContent(23,2.102419);
   data_mc_ratio__278->SetBinContent(24,11.65404);
   data_mc_ratio__278->SetBinContent(25,12.96972);
   data_mc_ratio__278->SetBinContent(26,10.03421);
   data_mc_ratio__278->SetBinContent(27,1.380682);
   data_mc_ratio__278->SetBinContent(28,8.491195);
   data_mc_ratio__278->SetBinContent(29,18.10104);
   data_mc_ratio__278->SetBinContent(30,13.92667);
   data_mc_ratio__278->SetBinContent(31,13.88112);
   data_mc_ratio__278->SetBinError(1,0.005485079);
   data_mc_ratio__278->SetBinError(2,0.005093084);
   data_mc_ratio__278->SetBinError(3,0.006115703);
   data_mc_ratio__278->SetBinError(4,0.009264721);
   data_mc_ratio__278->SetBinError(5,0.009517815);
   data_mc_ratio__278->SetBinError(6,0.01225124);
   data_mc_ratio__278->SetBinError(7,0.01936503);
   data_mc_ratio__278->SetBinError(8,0.01222218);
   data_mc_ratio__278->SetBinError(9,0.01802206);
   data_mc_ratio__278->SetBinError(10,0.0231007);
   data_mc_ratio__278->SetBinError(11,0.02099823);
   data_mc_ratio__278->SetBinError(12,0.02486025);
   data_mc_ratio__278->SetBinError(13,0.04449095);
   data_mc_ratio__278->SetBinError(14,0.03741764);
   data_mc_ratio__278->SetBinError(15,0.07710395);
   data_mc_ratio__278->SetBinError(16,0.03377434);
   data_mc_ratio__278->SetBinError(17,0.08916854);
   data_mc_ratio__278->SetBinError(18,0.08665683);
   data_mc_ratio__278->SetBinError(19,0.1262083);
   data_mc_ratio__278->SetBinError(20,0.2183139);
   data_mc_ratio__278->SetBinError(21,0.3223129);
   data_mc_ratio__278->SetBinError(22,0.2800444);
   data_mc_ratio__278->SetBinError(23,0.2280393);
   data_mc_ratio__278->SetBinError(24,1.631892);
   data_mc_ratio__278->SetBinError(25,2.408417);
   data_mc_ratio__278->SetBinError(26,2.302006);
   data_mc_ratio__278->SetBinError(27,0.4602273);
   data_mc_ratio__278->SetBinError(28,2.830398);
   data_mc_ratio__278->SetBinError(29,5.724052);
   data_mc_ratio__278->SetBinError(30,6.963333);
   data_mc_ratio__278->SetBinError(31,5.364982);
   data_mc_ratio__278->SetMinimum(0.4);
   data_mc_ratio__278->SetMaximum(1.6);
   data_mc_ratio__278->SetEntries(76.78245);
   data_mc_ratio__278->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__278->SetLineColor(ci);
   data_mc_ratio__278->SetLineWidth(2);
   data_mc_ratio__278->SetMarkerStyle(20);
   data_mc_ratio__278->SetMarkerSize(1.2);
   data_mc_ratio__278->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__278->GetXaxis()->SetRange(1,30);
   data_mc_ratio__278->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__278->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__278->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__278->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__278->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__278->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__278->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__278->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__278->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__278->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__278->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__278->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__278->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__278->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__278->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__278->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__278->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1278[30] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9};
   Double_t Graph_from_mc_statistical_error_fy1278[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1278[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1278[30] = {
   0.05108425,
   0.04520108,
   0.0755574,
   0.07832789,
   0.09811029,
   0.117935,
   0.09843034,
   0.2322184,
   0.171517,
   0.1782569,
   0.2260588,
   0.2316311,
   0.1116478,
   0.2657469,
   0.1376092,
   0.4191143,
   0.2065257,
   0.2311263,
   0.2935326,
   0.2696694,
   0.361007,
   0.6892141,
   0.7318479,
   0.1149736,
   0.1612719,
   0.1729521,
   0.8189674,
   0.2333755,
   0.3373669,
   0.4592156};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1278,Graph_from_mc_statistical_error_fy1278,Graph_from_mc_statistical_error_fex1278,Graph_from_mc_statistical_error_fey1278);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1278 = new TH1F("Graph_Graph_from_mc_statistical_error1278","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1278->SetMinimum(0.01723914);
   Graph_Graph_from_mc_statistical_error1278->SetMaximum(1.982761);
   Graph_Graph_from_mc_statistical_error1278->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1278->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1278->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1278);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
