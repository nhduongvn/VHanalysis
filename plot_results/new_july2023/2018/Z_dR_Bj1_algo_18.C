void Z_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_algo_18/Z_dR_Bj1_algo_18
//=========  (Fri Jul 14 13:38:26 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_algo_18 = new TCanvas("Z_dR_Bj1_algo_18", "Z_dR_Bj1_algo_18",0,0,600,600);
   Z_dR_Bj1_algo_18->SetHighLightColor(2);
   Z_dR_Bj1_algo_18->Range(0,0,1,1);
   Z_dR_Bj1_algo_18->SetFillColor(0);
   Z_dR_Bj1_algo_18->SetFillStyle(4000);
   Z_dR_Bj1_algo_18->SetBorderMode(0);
   Z_dR_Bj1_algo_18->SetBorderSize(2);
   Z_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-125.3515,6.314516,125236.2);
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
   st->SetMaximum(107333.3);
   
   TH1F *st_stack_151 = new TH1F("st_stack_151","",30,0,6);
   st_stack_151->SetMinimum(0.01);
   st_stack_151->SetMaximum(112700);
   st_stack_151->SetDirectory(0);
   st_stack_151->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_151->SetLineColor(ci);
   st_stack_151->GetXaxis()->SetRange(1,30);
   st_stack_151->GetXaxis()->SetLabelFont(42);
   st_stack_151->GetXaxis()->SetLabelSize(0.035);
   st_stack_151->GetXaxis()->SetTitleSize(0.035);
   st_stack_151->GetXaxis()->SetTitleFont(42);
   st_stack_151->GetYaxis()->SetTitle("Events/0.2");
   st_stack_151->GetYaxis()->SetLabelFont(42);
   st_stack_151->GetYaxis()->SetLabelSize(0.05);
   st_stack_151->GetYaxis()->SetTitleSize(0.057);
   st_stack_151->GetYaxis()->SetTitleOffset(1.2);
   st_stack_151->GetYaxis()->SetTitleFont(42);
   st_stack_151->GetZaxis()->SetLabelFont(42);
   st_stack_151->GetZaxis()->SetLabelSize(0.035);
   st_stack_151->GetZaxis()->SetTitleSize(0.035);
   st_stack_151->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_151);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(1,126.0093);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(2,28771.27);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(3,33325.81);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(4,22946.59);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(5,19863.18);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(6,13611.11);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(7,12026.26);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(8,7729.369);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(9,7623.91);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(10,4475.966);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(11,3634.015);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(12,3602.236);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(13,1916.887);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(14,1570.966);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(15,3532.211);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(16,2817.692);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(17,1694.776);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(18,1544.898);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(19,2822.552);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(20,1465.939);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(21,1350.114);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(22,2239.288);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(23,1931.218);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(24,878.8518);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(25,1198.933);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(26,889.9075);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(27,411.1663);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(28,672.0154);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(29,159.5242);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(30,114.8809);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinContent(31,434.0878);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(1,48.64186);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(2,1885.75);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(3,2131.141);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(4,1888.593);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(5,2337.047);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(6,1430.293);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(7,2072.685);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(8,1019.627);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(9,1220.765);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(10,649.7309);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(11,636.7374);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(12,718.1097);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(13,190.3962);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(14,161.9028);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(15,719.6389);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(16,624.64);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(17,376.4591);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(18,374.3377);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(19,709.095);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(20,372.6809);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(21,367.9139);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(22,616.265);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(23,510.9847);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(24,127.1501);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(25,366.7203);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(26,357.1978);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(27,77.83822);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(28,351.018);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(29,50.72298);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(30,39.15084);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetBinError(31,345.4597);
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetEntries(13324);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(1,0.05123843);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(2,82.558);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(3,175.3035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(4,210.4429);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(5,197.8699);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(6,170.873);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(7,143.9023);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(8,122.1071);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(9,95.59485);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(10,71.65933);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(11,60.90888);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(12,51.45987);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(13,45.01022);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(14,38.41334);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(15,37.47816);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(16,34.76272);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(17,29.70095);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(18,28.42608);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(19,26.87625);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(20,25.5288);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(21,22.1889);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(22,20.51592);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(23,17.73151);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(24,13.90018);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(25,9.382242);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(26,5.712163);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(27,5.073089);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(28,3.757244);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(29,3.158969);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(30,1.76023);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinContent(31,2.401895);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(1,0.05123843);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(2,3.69378);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(3,5.192737);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(4,5.598487);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(5,5.25075);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(6,5.020966);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(7,4.589541);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(8,4.243409);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(9,3.630002);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(10,3.066367);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(11,2.841893);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(12,2.70322);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(13,2.466173);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(14,2.326443);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(15,2.316653);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(16,2.161016);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(17,1.979344);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(18,1.915727);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(19,1.944023);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(20,1.892374);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(21,1.847353);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(22,1.819255);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(23,1.606621);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(24,1.435072);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(25,1.22776);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(26,0.8857675);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(27,0.8680632);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(28,0.8631492);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(29,0.7622951);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(30,0.5205442);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetBinError(31,0.6608013);
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetEntries(21685);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(1,3.210666);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(2,960.9873);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(3,2149.55);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(4,2469.962);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(5,2249.493);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(6,1795.593);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(7,1424.993);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(8,1106.308);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(9,888.0834);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(10,727.6154);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(11,601.6315);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(12,523.1628);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(13,451.0028);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(14,405.7779);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(15,374.1678);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(16,346.5502);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(17,323.4315);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(18,298.7961);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(19,275.0008);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(20,252.6713);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(21,219.1815);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(22,179.2813);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(23,136.5169);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(24,102.0914);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(25,67.17931);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(26,46.20078);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(27,27.88516);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(28,15.7964);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(29,7.524066);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(30,5.775124);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinContent(31,8.875957);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(1,0.41934);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(2,7.68573);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(3,11.49487);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(4,12.25392);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(5,11.63869);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(6,10.35671);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(7,9.217678);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(8,8.087885);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(9,7.252747);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(10,6.560149);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(11,5.961292);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(12,5.561508);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(13,5.172731);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(14,4.897294);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(15,4.711422);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(16,4.534642);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(17,4.382889);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(18,4.215196);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(19,4.04876);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(20,3.879027);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(21,3.616173);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(22,3.272476);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(23,2.857051);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(24,2.471436);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(25,2.000314);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(26,1.660423);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(27,1.279698);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(28,0.9543033);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(29,0.6601868);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(30,0.5824306);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetBinError(31,0.7148779);
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetEntries(319331);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(1,0.958935);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(2,245.923);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(3,390.5935);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(4,208.529);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(5,130.2714);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(6,95.2015);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(7,61.80188);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(8,50.63567);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(9,56.15405);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(10,32.94047);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(11,34.43458);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(12,18.21786);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(13,20.85202);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(14,18.0537);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(15,21.91158);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(16,17.68341);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(17,17.22651);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(18,15.45964);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(19,17.88272);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(20,18.94234);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(21,16.31318);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(22,13.27124);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(23,16.51231);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(24,11.75533);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(25,8.904359);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(26,6.45628);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(27,5.385186);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(28,2.924097);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(29,1.395638);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(30,0.8140376);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinContent(31,1.826231);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(1,0.3048737);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(2,8.466343);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(3,15.66287);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(4,12.13857);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(5,11.38703);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(6,6.752754);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(7,4.210376);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(8,3.805417);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(9,7.846995);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(10,2.878666);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(11,5.004334);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(12,1.995591);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(13,2.248002);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(14,2.181027);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(15,4.589982);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(16,2.173154);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(17,2.244916);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(18,2.111461);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(19,4.501161);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(20,4.475314);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(21,2.424135);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(22,1.8729);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(23,4.439304);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(24,1.87281);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(25,1.505944);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(26,1.272496);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(27,1.155056);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(28,0.558979);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(29,0.3764676);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(30,0.3102265);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetBinError(31,0.7633475);
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetEntries(8300);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(1,0.5816142);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(2,138.5243);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(3,138.0846);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(4,106.5257);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(5,79.13288);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(6,51.37384);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(7,43.44661);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(8,39.56944);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(9,24.84074);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(10,15.18835);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(11,26.06846);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(12,13.05596);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(13,14.57019);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(14,9.203806);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(15,11.83076);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(16,8.445651);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(17,3.550696);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(18,9.393268);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(19,10.91384);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(20,10.00141);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(21,8.845606);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(22,9.318014);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(23,4.344673);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(24,2.292482);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(25,2.441972);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(26,2.463265);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(27,4.437922);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(28,4.12936);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(29,0.8232334);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(30,0.2671942);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinContent(31,0.3497054);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(1,0.3882884);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(2,11.93474);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(3,11.29655);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(4,14.45962);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(5,13.42027);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(6,7.613556);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(7,11.86278);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(8,6.917246);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(9,5.360272);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(10,2.709889);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(11,11.01931);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(12,3.276678);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(13,3.838606);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(14,3.101785);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(15,3.761988);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(16,3.066094);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(17,0.7426666);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(18,3.128731);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(19,3.736925);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(20,2.453264);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(21,3.110636);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(22,3.14572);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(23,0.9746192);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(24,0.5976245);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(25,0.6230919);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(26,0.7239135);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(27,2.202719);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(28,2.180601);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(29,0.3715231);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(30,0.1795433);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetBinError(31,0.2924814);
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetEntries(3417);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(2,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(4,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(5,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(7,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(10,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(15,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(18,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinContent(22,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(2,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(4,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(5,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(7,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(10,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(15,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(18,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetBinError(22,0.2890483);
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(1,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(2,4.353942);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(3,7.4639);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(4,2.487967);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(5,1.243983);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(7,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(8,0.4146611);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(9,0.6219917);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(10,0.4146611);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(13,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(15,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(19,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(21,0.6219917);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(24,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinContent(27,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(1,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(2,0.950108);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(3,1.243983);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(4,0.7182142);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(5,0.5078541);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(7,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(8,0.2932097);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(9,0.3591071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(10,0.2932097);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(13,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(15,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(19,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(21,0.3591071);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(24,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetBinError(27,0.2073306);
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(2,5.358321);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(3,6.800945);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(4,3.091339);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(5,0.6182678);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(6,0.4121785);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(7,1.236536);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(8,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(9,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(10,0.4121785);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(11,0.4121785);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(13,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(15,0.4121785);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(17,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(22,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(23,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(24,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinContent(27,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(2,1.050853);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(3,1.183893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(4,0.7981802);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(5,0.3569571);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(6,0.2914542);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(7,0.5048135);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(8,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(9,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(10,0.2914542);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(11,0.2914542);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(13,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(15,0.2914542);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(17,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(22,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(23,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(24,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetBinError(27,0.2060893);
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(1,0.004571557);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(2,1.664047);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(3,3.245806);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(4,2.400068);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(5,1.296036);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(6,0.5623015);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(7,0.3657246);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(8,0.237721);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(9,0.2125774);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(10,0.1714334);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(11,0.1485756);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(12,0.1302894);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(13,0.1120032);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(14,0.123432);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(15,0.10286);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(16,0.1188605);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(17,0.1051458);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(18,0.1257178);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(19,0.1120032);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(20,0.1097174);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(21,0.1120032);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(22,0.1325752);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(23,0.1074316);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(24,0.1005743);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(25,0.05943024);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(26,0.03657246);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(27,0.01142889);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(28,0.004571557);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinContent(29,0.002285779);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(1,0.003232579);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(2,0.06167368);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(3,0.08613474);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(4,0.07406769);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(5,0.05442842);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(6,0.03585104);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(7,0.02891307);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(8,0.02331046);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(9,0.02204325);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(10,0.01979542);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(11,0.01842854);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(12,0.01725725);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(13,0.01600045);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(14,0.01679697);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(15,0.01533347);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(16,0.01648298);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(17,0.01550291);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(18,0.01695179);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(19,0.01600045);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(20,0.01583634);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(21,0.01600045);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(22,0.01740797);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(23,0.01567051);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(24,0.01516214);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(25,0.01165523);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(26,0.009143115);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(27,0.005111156);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(28,0.003232579);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetBinError(29,0.002285779);
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(1,0.004769157);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(2,0.9979461);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(3,2.196793);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(4,1.979796);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(5,1.193482);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(6,0.6951047);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(7,0.4178974);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(8,0.284361);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(9,0.2211697);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(10,0.1490362);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(11,0.1603629);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(12,0.1096906);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(13,0.1144598);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(14,0.09955615);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(15,0.08465254);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(16,0.1037292);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(17,0.09180627);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(18,0.103133);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(19,0.09717158);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(20,0.09538314);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(21,0.09955615);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(22,0.09836387);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(23,0.08644097);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(24,0.0560376);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(25,0.04471085);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(26,0.01907663);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(27,0.02086506);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(28,0.005961446);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(29,0.002384579);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(30,0.002384579);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinContent(31,0.001788434);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(1,0.001686152);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(2,0.02439099);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(3,0.03618848);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(4,0.03435469);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(5,0.02667373);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(6,0.0203564);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(7,0.01578377);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(8,0.01302);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(9,0.01148256);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(10,0.009425874);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(11,0.009777499);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(12,0.008086499);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(13,0.008260422);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(14,0.007703887);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(15,0.007103883);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(16,0.007863688);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(17,0.00739796);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(18,0.007841059);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(19,0.007611065);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(20,0.0075407);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(21,0.007703887);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(22,0.007657617);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(23,0.007178532);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(24,0.005779837);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(25,0.005162764);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(26,0.003372303);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(27,0.003526839);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(28,0.001885175);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(29,0.001192289);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(30,0.001192289);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetBinError(31,0.001032553);
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(1,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(2,0.1706821);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(3,0.2161974);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(4,0.06827286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(5,0.0182061);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(7,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(8,0.009103048);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(10,0.01137881);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(11,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(15,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(16,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(20,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(21,0.006827286);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(23,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinContent(24,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(1,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(2,0.01970868);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(3,0.02218138);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(4,0.01246486);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(5,0.006436827);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(6,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(7,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(8,0.004551524);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(10,0.005088758);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(11,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(12,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(15,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(16,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(18,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(19,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(20,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(21,0.003941735);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(22,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(23,0.003218413);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetBinError(24,0.002275762);
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(2,0.04045367);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(3,0.07731145);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(4,0.03116431);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(5,0.007791077);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(6,0.003895538);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(7,0.004494852);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(8,0.002696911);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(9,0.003296225);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(10,0.001797941);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(11,0.002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(12,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(13,0.001797941);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(14,0.001198627);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(15,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(16,0.002097598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(17,0.001198627);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(19,0.001198627);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(21,0.001198627);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(22,0.002397254);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(23,0.001498284);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(24,0.001797941);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(25,0.001498284);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinContent(26,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(2,0.003481697);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(3,0.004813201);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(4,0.003055912);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(5,0.001527956);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(6,0.001080428);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(7,0.001160566);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(8,0.0008989704);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(9,0.0009938492);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(10,0.0007340063);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(11,0.000947598);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(12,0.0002996568);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(13,0.0007340063);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(14,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(15,0.0004237787);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(16,0.0007928174);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(17,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(19,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(21,0.0005993136);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(22,0.0008475574);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(23,0.000670053);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(24,0.0007340063);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(25,0.000670053);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetBinError(26,0.0005190208);
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj1__301 = new TH1D("VbbHcc_algo_Z_dR_Bj1__301","",30,0,6);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(1,137);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(2,39246);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(3,48300);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(4,36433);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(5,29995);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(6,23766);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(7,18877);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(8,15225);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(9,11829);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(10,9688);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(11,7975);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(12,7033);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(13,6052);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(14,5595);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(15,5054);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(16,4800);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(17,4398);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(18,3893);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(19,3769);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(20,3716);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(21,3393);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(22,3179);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(23,2867);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(24,2343);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(25,1835);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(26,1313);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(27,898);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(28,537);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(29,393);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(30,179);
   VbbHcc_algo_Z_dR_Bj1__301->SetBinContent(31,353);
   VbbHcc_algo_Z_dR_Bj1__301->SetEntries(303071);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj1__301->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj1__301->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj1__301->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj1__301->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj1__301->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj1__301->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__301->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__301->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__301->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__301->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__301->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__301->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__301->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj1__301->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__301->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj1__301->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__301->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj1__301->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj1__301->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1301[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1301[30] = {
   131.0307,
   30212.14,
   36199.35,
   25952.4,
   22524.61,
   15725.84,
   13702.94,
   9049.145,
   8689.849,
   5324.819,
   4357.788,
   4208.377,
   2448.963,
   2042.639,
   3978.703,
   3225.363,
   2069.092,
   1897.494,
   3153.648,
   1773.294,
   1617.484,
   2462.406,
   2106.73,
   1009.465,
   1286.946,
   950.7966,
   454.3934,
   698.6331,
   172.4308,
   123.4999};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1301[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1301[30] = {
   48.64664,
   1885.826,
   2131.267,
   1888.735,
   2337.148,
   1430.375,
   2072.749,
   1019.698,
   1220.829,
   649.7834,
   636.8867,
   718.1465,
   190.5346,
   162.0379,
   719.6826,
   624.6715,
   376.4973,
   374.3855,
   709.1333,
   372.7408,
   367.9576,
   616.2873,
   511.0154,
   127.1977,
   366.7315,
   357.2057,
   77.89385,
   351.0276,
   50.73576,
   39.16027};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj1_fx1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fy1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fex1301,Graph_from_VbbHcc_algo_Z_dR_Bj1_fey1301);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetMinimum(74.14567);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetMaximum(42155.43);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj11301);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   Z_dR_Bj1_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__302 = new TH1D("data_mc_ratio__302","",30,0,6);
   data_mc_ratio__302->SetBinContent(1,1.045556);
   data_mc_ratio__302->SetBinContent(2,1.299014);
   data_mc_ratio__302->SetBinContent(3,1.334278);
   data_mc_ratio__302->SetBinContent(4,1.403839);
   data_mc_ratio__302->SetBinContent(5,1.331655);
   data_mc_ratio__302->SetBinContent(6,1.511271);
   data_mc_ratio__302->SetBinContent(7,1.377588);
   data_mc_ratio__302->SetBinContent(8,1.682479);
   data_mc_ratio__302->SetBinContent(9,1.361244);
   data_mc_ratio__302->SetBinContent(10,1.819405);
   data_mc_ratio__302->SetBinContent(11,1.830057);
   data_mc_ratio__302->SetBinContent(12,1.67119);
   data_mc_ratio__302->SetBinContent(13,2.47125);
   data_mc_ratio__302->SetBinContent(14,2.739103);
   data_mc_ratio__302->SetBinContent(15,1.270263);
   data_mc_ratio__302->SetBinContent(16,1.488205);
   data_mc_ratio__302->SetBinContent(17,2.12557);
   data_mc_ratio__302->SetBinContent(18,2.051653);
   data_mc_ratio__302->SetBinContent(19,1.195124);
   data_mc_ratio__302->SetBinContent(20,2.095535);
   data_mc_ratio__302->SetBinContent(21,2.097702);
   data_mc_ratio__302->SetBinContent(22,1.291014);
   data_mc_ratio__302->SetBinContent(23,1.360877);
   data_mc_ratio__302->SetBinContent(24,2.321031);
   data_mc_ratio__302->SetBinContent(25,1.425856);
   data_mc_ratio__302->SetBinContent(26,1.380947);
   data_mc_ratio__302->SetBinContent(27,1.976261);
   data_mc_ratio__302->SetBinContent(28,0.7686438);
   data_mc_ratio__302->SetBinContent(29,2.279175);
   data_mc_ratio__302->SetBinContent(30,1.449394);
   data_mc_ratio__302->SetBinContent(31,0.7887504);
   data_mc_ratio__302->SetBinError(1,0.08932791);
   data_mc_ratio__302->SetBinError(2,0.006557167);
   data_mc_ratio__302->SetBinError(3,0.006071176);
   data_mc_ratio__302->SetBinError(4,0.007354784);
   data_mc_ratio__302->SetBinError(5,0.007688952);
   data_mc_ratio__302->SetBinError(6,0.00980312);
   data_mc_ratio__302->SetBinError(7,0.01002658);
   data_mc_ratio__302->SetBinError(8,0.0136355);
   data_mc_ratio__302->SetBinError(9,0.01251589);
   data_mc_ratio__302->SetBinError(10,0.01848469);
   data_mc_ratio__302->SetBinError(11,0.02049271);
   data_mc_ratio__302->SetBinError(12,0.01992763);
   data_mc_ratio__302->SetBinError(13,0.03176634);
   data_mc_ratio__302->SetBinError(14,0.03661916);
   data_mc_ratio__302->SetBinError(15,0.01786801);
   data_mc_ratio__302->SetBinError(16,0.02148038);
   data_mc_ratio__302->SetBinError(17,0.03205146);
   data_mc_ratio__302->SetBinError(18,0.03288227);
   data_mc_ratio__302->SetBinError(19,0.01946703);
   data_mc_ratio__302->SetBinError(20,0.03437614);
   data_mc_ratio__302->SetBinError(21,0.03601238);
   data_mc_ratio__302->SetBinError(22,0.02289737);
   data_mc_ratio__302->SetBinError(23,0.02541587);
   data_mc_ratio__302->SetBinError(24,0.04795068);
   data_mc_ratio__302->SetBinError(25,0.03328569);
   data_mc_ratio__302->SetBinError(26,0.03811051);
   data_mc_ratio__302->SetBinError(27,0.06594869);
   data_mc_ratio__302->SetBinError(28,0.03316943);
   data_mc_ratio__302->SetBinError(29,0.1149692);
   data_mc_ratio__302->SetBinError(30,0.1083328);
   data_mc_ratio__302->SetBinError(31,0.6102879);
   data_mc_ratio__302->SetMinimum(0.4);
   data_mc_ratio__302->SetMaximum(1.6);
   data_mc_ratio__302->SetEntries(747.9906);
   data_mc_ratio__302->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__302->SetLineColor(ci);
   data_mc_ratio__302->SetLineWidth(2);
   data_mc_ratio__302->SetMarkerStyle(20);
   data_mc_ratio__302->SetMarkerSize(1.2);
   data_mc_ratio__302->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__302->GetXaxis()->SetRange(1,30);
   data_mc_ratio__302->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__302->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__302->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__302->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__302->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__302->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__302->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__302->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__302->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__302->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__302->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__302->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__302->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__302->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__302->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__302->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__302->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1302[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1302[30] = {
   0.3712613,
   0.06241949,
   0.05887583,
   0.0727769,
   0.1037597,
   0.09095703,
   0.1512632,
   0.1126845,
   0.140489,
   0.1220292,
   0.1461491,
   0.1706469,
   0.07780215,
   0.07932771,
   0.1808837,
   0.1936748,
   0.1819625,
   0.1973052,
   0.2248613,
   0.2101968,
   0.2274876,
   0.2502786,
   0.2425633,
   0.126005,
   0.2849625,
   0.375691,
   0.1714238,
   0.5024492,
   0.2942384,
   0.3170876};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1302,Graph_from_mc_statistical_error_fy1302,Graph_from_mc_statistical_error_fex1302,Graph_from_mc_statistical_error_fey1302);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1302 = new TH1F("Graph_Graph_from_mc_statistical_error1302","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1302->SetMinimum(0.397061);
   Graph_Graph_from_mc_statistical_error1302->SetMaximum(1.602939);
   Graph_Graph_from_mc_statistical_error1302->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1302->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1302->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1302->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1302->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1302);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->Modified();
   Z_dR_Bj1_algo_18->cd();
   Z_dR_Bj1_algo_18->SetSelected(Z_dR_Bj1_algo_18);
}
