void Z_dR_Bj0_algo_all()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_all/Z_dR_Bj0_algo_all
//=========  (Fri Jul 14 13:38:25 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_all = new TCanvas("Z_dR_Bj0_algo_all", "Z_dR_Bj0_algo_all",0,0,600,600);
   Z_dR_Bj0_algo_all->SetHighLightColor(2);
   Z_dR_Bj0_algo_all->Range(0,0,1,1);
   Z_dR_Bj0_algo_all->SetFillColor(0);
   Z_dR_Bj0_algo_all->SetFillStyle(4000);
   Z_dR_Bj0_algo_all->SetBorderMode(0);
   Z_dR_Bj0_algo_all->SetBorderSize(2);
   Z_dR_Bj0_algo_all->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-600.9215,6.314516,600620.6);
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
   st->SetMinimum(0.3);
   st->SetMaximum(514760.4);
   
   TH1F *st_stack_148 = new TH1F("st_stack_148","",30,0,6);
   st_stack_148->SetMinimum(0.3);
   st_stack_148->SetMaximum(540498.4);
   st_stack_148->SetDirectory(0);
   st_stack_148->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_148->SetLineColor(ci);
   st_stack_148->GetXaxis()->SetRange(1,30);
   st_stack_148->GetXaxis()->SetLabelFont(42);
   st_stack_148->GetXaxis()->SetLabelSize(0.035);
   st_stack_148->GetXaxis()->SetTitleSize(0.035);
   st_stack_148->GetXaxis()->SetTitleFont(42);
   st_stack_148->GetYaxis()->SetTitle("Events/0.2");
   st_stack_148->GetYaxis()->SetLabelFont(42);
   st_stack_148->GetYaxis()->SetLabelSize(0.05);
   st_stack_148->GetYaxis()->SetTitleSize(0.057);
   st_stack_148->GetYaxis()->SetTitleOffset(1.2);
   st_stack_148->GetYaxis()->SetTitleFont(42);
   st_stack_148->GetZaxis()->SetLabelFont(42);
   st_stack_148->GetZaxis()->SetLabelSize(0.035);
   st_stack_148->GetZaxis()->SetTitleSize(0.035);
   st_stack_148->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_148);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(1,66547.37);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(2,218033.8);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(3,159723.4);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(4,84486.32);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(5,57774.92);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(6,37371.99);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(7,27032.67);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(8,19728.67);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(9,9752.847);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(10,10398.7);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(11,10226.6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(12,9647.165);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(13,8557.081);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(14,3577.682);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(15,7208.95);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(16,4214.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(17,5246.322);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(18,6424.839);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(19,2735.082);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(20,2178.685);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(21,1263.574);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(22,2001.329);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(23,131.4532);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(24,1888.992);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(25,67.31295);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(26,78.22155);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(27,30.82845);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(29,26.9946);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinContent(31,21.92786);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(1,2515.482);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(2,6701.218);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(3,21469.61);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(4,4777.615);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(5,4154.989);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(6,3377.488);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(7,3067.695);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(8,2638.552);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(9,1175.431);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(10,1311.657);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(11,2452.926);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(12,2153.295);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(13,1295.634);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(14,652.5637);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(15,1244.288);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(16,1746.643);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(17,1648.006);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(18,2180.936);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(19,693.4592);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(20,675.9138);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(21,510.4828);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(22,1461.151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(23,50.02067);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(24,1460.699);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(25,37.99073);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(26,39.55871);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(27,29.31277);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(29,15.0208);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetBinError(31,21.92786);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetEntries(42544);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(1,182.23);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(2,1058.884);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(3,1253.36);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(4,921.6351);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(5,605.1228);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(6,403.9529);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(7,275.7896);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(8,214.0682);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(9,161.5295);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(10,134.4349);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(11,110.2813);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(12,88.38472);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(13,73.36481);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(14,70.55014);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(15,59.96255);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(16,56.12141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(17,47.15672);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(18,39.02163);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(19,27.39975);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(20,21.812);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(21,14.46029);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(22,8.571026);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(23,6.049988);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(24,3.302967);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(25,1.705206);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(26,1.86706);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(27,0.8737085);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(28,0.3342741);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(29,0.7571453);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(30,0.4259959);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinContent(31,1.160882);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(1,5.498185);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(2,12.53771);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(3,13.14071);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(4,11.04403);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(5,8.943854);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(6,7.18231);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(7,5.903993);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(8,5.269065);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(9,4.556232);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(10,4.256253);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(11,3.741077);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(12,3.339818);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(13,2.96114);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(14,3.056937);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(15,2.763347);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(16,2.719394);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(17,2.373108);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(18,2.27719);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(19,1.791081);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(20,1.701386);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(21,1.476444);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(22,1.196825);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(23,0.9379917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(24,0.6746435);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(25,0.5032988);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(26,0.5211988);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(27,0.3128096);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(28,0.1266102);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(29,0.3157029);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(30,0.280815);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetBinError(31,0.4139213);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetEntries(80803);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_3 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(1,1383.934);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(2,9783.027);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(3,12924.31);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(4,9916.581);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(5,6369.473);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(6,4218.924);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(7,3010.62);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(8,2228.544);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(9,1754.051);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(10,1411.321);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(11,1174.746);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(12,1006.977);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(13,892.6689);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(14,782.7568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(15,707.8623);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(16,624.6382);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(17,545.5147);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(18,449.6127);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(19,332.6636);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(20,228.5652);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(21,128.8557);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(22,73.42005);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(23,38.51425);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(24,20.79108);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(25,13.72001);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(26,10.18758);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(27,5.327382);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(28,4.199089);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(29,2.593729);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(30,2.29628);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinContent(31,4.675519);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(1,9.28);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(2,24.53392);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(3,28.11192);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(4,24.57142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(5,19.66937);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(6,15.99605);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(7,13.51777);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(8,11.61306);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(9,10.29364);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(10,9.232647);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(11,8.419653);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(12,7.796178);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(13,7.350814);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(14,6.88451);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(15,6.552551);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(16,6.170199);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(17,5.770306);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(18,5.2344);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(19,4.509847);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(20,3.744474);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(21,2.801004);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(22,2.111355);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(23,1.516915);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(24,1.119927);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(25,0.9046077);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(26,0.7774525);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(27,0.5609146);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(28,0.4981032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(29,0.394521);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(30,0.3756986);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetBinError(31,0.5275926);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetEntries(1023998);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_4 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(1,562.6124);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(2,1799.533);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(3,1056.367);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(4,592.8441);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(5,317.5299);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(6,254.1983);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(7,154.1629);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(8,115.2878);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(9,73.90903);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(10,64.37091);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(11,55.53354);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(12,44.99162);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(13,37.08151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(14,31.79833);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(15,34.88509);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(16,24.21454);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(17,26.79983);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(18,19.29115);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(19,21.38469);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(20,18.99627);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(21,10.95441);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(22,4.488171);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(23,2.211747);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(24,0.8316148);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(25,1.503634);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(26,0.1884629);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(27,0.4240067);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(28,0.4716052);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinContent(31,0.1624649);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(1,10.14588);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(2,30.34798);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(3,29.1917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(4,24.40393);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(5,16.90875);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(6,16.13237);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(7,11.19241);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(8,9.507815);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(9,6.147168);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(10,6.416575);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(11,6.306906);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(12,4.881247);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(13,4.024162);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(14,3.782556);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(15,5.380028);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(16,3.536608);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(17,3.70676);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(18,3.371971);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(19,4.301016);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(20,5.21375);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(21,3.026798);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(22,2.763976);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(23,0.6718622);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(24,0.3614913);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(25,0.6614417);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(26,0.133284);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(27,0.2977228);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(28,0.3136032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetBinError(31,0.1167352);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetEntries(32611);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_5 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(1,362.3671);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(2,898.8756);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(3,516.6591);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(4,298.8124);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(5,201.1862);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(6,117.828);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(7,76.39417);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(8,66.82055);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(9,30.52875);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(10,31.06991);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(11,43.66431);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(12,19.13435);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(13,34.90657);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(14,20.51814);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(15,12.3616);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(16,27.21404);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(17,11.88661);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(18,10.30661);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(19,9.578044);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(20,7.821325);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(21,10.2547);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(22,1.069381);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(23,1.580052);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(24,2.612465);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(25,0.3476743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(26,0.148621);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(27,0.1842847);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(28,0.2883298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinContent(31,1.421451);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(1,16.6633);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(2,36.20898);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(3,29.72407);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(4,22.92301);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(5,21.35286);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(6,12.44917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(7,11.4146);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(8,9.657458);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(9,6.896807);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(10,5.098125);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(11,14.25733);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(12,3.779426);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(13,9.866582);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(14,6.978639);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(15,3.319549);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(16,9.711193);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(17,3.056539);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(18,2.478897);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(19,3.377034);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(20,2.83957);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(21,6.816853);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(22,0.3600674);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(23,1.211218);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(24,2.111218);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(25,0.1894641);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(26,0.1485579);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(27,0.1765407);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(28,0.2883298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetBinError(31,1.167636);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetEntries(16359);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(1,1.668682);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(2,3.334336);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(3,1.004666);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(4,1.293714);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(5,0.9202604);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(6,0.6625022);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(7,0.1718388);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(8,0.4593733);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(9,0.6609884);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(11,0.08591938);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(12,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(13,0.2875345);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(14,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(15,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(18,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinContent(24,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(1,0.5544838);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(2,0.7374743);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(3,0.3646537);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(4,0.4653184);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(5,0.401383);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(6,0.3727759);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(7,0.1215083);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(8,0.2505895);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(9,0.3216267);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(11,0.08591938);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(12,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(13,0.2191593);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(14,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(15,0.2890483);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(18,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetBinError(24,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetEntries(87);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(1,4.867887);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(2,14.59432);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(3,6.010071);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(4,2.922272);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(5,1.510089);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(6,1.382661);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(7,0.637141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(8,0.775042);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(9,0.5943726);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(10,0.3822846);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(11,0.1911423);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(12,0.3290433);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(13,0.3927574);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(14,0.2653292);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(15,0.4164765);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(16,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(18,0.2653292);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(19,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(20,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinContent(24,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(1,0.7042896);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(2,1.107676);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(3,0.6622176);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(4,0.5540111);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(5,0.4349131);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(6,0.4254767);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(7,0.2014817);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(8,0.2778202);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(9,0.3057381);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(10,0.156067);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(11,0.1103561);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(12,0.220834);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(13,0.2298415);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(14,0.211443);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(15,0.3027671);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(16,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(18,0.211443);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(19,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(20,0.0637141);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetBinError(24,0.2016151);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetEntries(488);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_8 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(1,7.431809);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(2,29.04985);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(3,10.81356);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(4,5.494203);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(5,2.979813);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(6,1.716738);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(7,0.7516297);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(8,1.29717);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(9,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(10,0.9043079);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(11,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(12,0.7323135);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(13,0.3661568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(14,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(15,0.5381511);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(17,0.5648566);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(18,0.3587674);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(20,0.5529298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinContent(21,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(1,1.192164);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(2,2.352862);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(3,1.435106);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(4,1.022137);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(5,0.7460306);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(6,0.573242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(7,0.3764492);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(8,0.4908719);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(9,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(10,0.4044728);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(11,0.2536869);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(12,0.3662313);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(13,0.2589647);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(14,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(15,0.3107017);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(17,0.3268483);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(18,0.2536869);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(20,0.3192912);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetBinError(21,0.1793837);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetEntries(341);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_9 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(1,2.550753);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(2,13.03848);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(3,8.476713);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(4,3.805644);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(5,1.979616);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(6,1.21369);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(7,0.8138942);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(8,0.6246708);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(9,0.4950253);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(10,0.4174619);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(11,0.3438559);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(12,0.2897072);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(13,0.2757672);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(14,0.227294);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(15,0.2049093);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(16,0.1993144);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(17,0.1642502);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(18,0.1699973);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(19,0.135873);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(20,0.0976854);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(21,0.04114128);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(22,0.03242849);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(23,0.003665166);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(25,0.002758775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinContent(28,0.001379387);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(1,0.0671582);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(2,0.1519079);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(3,0.1209568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(4,0.08032242);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(5,0.05813918);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(6,0.04574451);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(7,0.03773817);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(8,0.03291129);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(9,0.02954921);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(10,0.02736864);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(11,0.02440203);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(12,0.02239105);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(13,0.02200741);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(14,0.02019984);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(15,0.01882462);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(16,0.01792781);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(17,0.01646484);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(18,0.01705088);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(19,0.01577666);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(20,0.01275531);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(21,0.00805412);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(22,0.007373836);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(23,0.002669737);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(25,0.001950748);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetBinError(28,0.001379387);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetEntries(21433);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_10 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(1,1.304482);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(2,6.98507);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(3,5.594353);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(4,2.93748);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(5,1.427675);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(6,0.850035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(7,0.5639524);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(8,0.4215954);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(9,0.3271471);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(10,0.2765009);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(11,0.201216);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(12,0.1546763);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(13,0.1615203);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(14,0.1669956);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(15,0.149201);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(16,0.1327752);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(17,0.1286687);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(18,0.1108741);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(19,0.10403);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(20,0.05749029);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(21,0.04106449);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(22,0.01368816);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(23,0.008212898);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(25,0.004106449);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(26,0.005475266);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinContent(31,0.001368816);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(1,0.02499383);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(2,0.05783611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(3,0.05175933);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(4,0.03750604);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(5,0.0261474);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(6,0.02017586);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(7,0.01643368);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(8,0.01420894);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(9,0.01251657);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(10,0.011507);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(11,0.009816235);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(12,0.008606479);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(13,0.008794827);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(14,0.00894265);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(15,0.00845278);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(16,0.007973925);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(17,0.007849649);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(18,0.007286665);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(19,0.007058186);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(20,0.005246999);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(21,0.004434523);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(22,0.002560273);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(23,0.001983179);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(25,0.001402319);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(26,0.001619259);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetBinError(31,0.0008096295);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetEntries(48501);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(1,0.1926656);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(2,0.8146866);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(3,0.3135061);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(4,0.09401002);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(5,0.05091165);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(6,0.01680179);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(7,0.02767432);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(8,0.02046857);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(9,0.01017702);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(10,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(11,0.01090628);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(12,0.01044703);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(13,0.004315259);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(15,0.003856013);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(19,0.006131775);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(20,0.00659102);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(21,0.003856013);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(1,0.02075869);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(2,0.04271795);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(3,0.0272375);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(4,0.01438872);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(5,0.01088);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(6,0.00613259);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(7,0.007612859);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(8,0.006939132);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(9,0.004202982);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(10,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(11,0.005013383);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(12,0.004778372);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(13,0.003158712);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(14,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(15,0.002770611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(16,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(17,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(18,0.002735007);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(19,0.00358544);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(20,0.003893142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(21,0.002770611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetBinError(22,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetEntries(747);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all_stack_12 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(1,0.03988554);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(2,0.2650888);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(3,0.1462257);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(4,0.05030419);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(5,0.01957356);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(6,0.01323213);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(7,0.008703565);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(8,0.007065887);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(9,0.005395112);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(10,0.005326228);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(11,0.001694951);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(12,0.003400168);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(13,0.002028713);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(14,0.003965712);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(15,0.002835296);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(16,0.003400504);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(17,0.001637005);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(18,0.001729057);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(19,0.00157906);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(20,0.001844611);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(21,0.001371454);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinContent(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(1,0.003403603);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(2,0.008780668);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(3,0.006597032);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(4,0.003904434);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(5,0.002417298);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(6,0.002055917);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(7,0.001576265);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(8,0.001472686);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(9,0.001235725);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(10,0.001228543);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(11,0.0006579769);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(12,0.001040947);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(13,0.0007815757);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(14,0.001046778);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(15,0.0009554226);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(16,0.001002142);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(17,0.0006887469);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(18,0.0007218493);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(19,0.0007181998);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(20,0.0007193555);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(21,0.0006875397);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetBinError(22,0.0002996568);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetEntries(2089);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_all__295 = new TH1D("VbbHcc_algo_Z_dR_Bj0_all__295","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(1,35557);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(2,121527);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(3,84437);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(4,55680);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(5,35468);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(6,23153);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(7,16520);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(8,12316);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(9,9493);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(10,7400);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(11,6247);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(12,5388);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(13,4648);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(14,4064);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(15,3667);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(16,3368);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(17,2733);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(18,2480);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(19,1850);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(20,1429);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(21,918);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(22,488);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(23,299);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(24,208);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(25,164);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(26,90);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(27,66);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(28,43);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(29,38);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(30,42);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetBinContent(31,66);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetEntries(439847);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_Bj0_all__295->SetLineColor(ci);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetLineWidth(2);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR_Bj0_all__295->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_all__295->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_all__295->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fx1295[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fy1295[30] = {
   69056.57,
   231642.2,
   175506.4,
   96232.79,
   65277.12,
   42372.75,
   30552.61,
   22357,
   11775.14,
   12041.89,
   11612.02,
   10808.37,
   9596.593,
   4484.353,
   8025.626,
   4946.624,
   5878.543,
   6944.182,
   3126.419,
   2456.66,
   1428.366,
   2088.927,
   179.8211,
   1916.933,
   84.59634,
   90.61875,
   37.63783,
   5.294678,
   30.34548,
   2.722276};
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fex1295[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fey1295[30] = {
   2515.581,
   6701.442,
   21469.67,
   4777.808,
   4155.135,
   3377.595,
   3067.772,
   2638.617,
   1175.521,
   1311.723,
   2452.993,
   2153.321,
   1295.702,
   652.6556,
   1244.325,
   1746.686,
   1648.025,
   2180.947,
   693.4978,
   675.9524,
   510.5472,
   1461.155,
   50.07162,
   1460.701,
   38.01105,
   39.57029,
   29.32184,
   0.6675477,
   15.0293,
   0.4690485};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fx1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fy1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fex1295,Graph_from_VbbHcc_algo_Z_dR_Bj0_all_fey1295);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR_Bj0_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetMinimum(2.027905);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetMaximum(262177.8);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR_Bj0_all1295);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR_Bj0_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj0_algo_all->cd();
  
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
   
   TH1D *data_mc_ratio__296 = new TH1D("data_mc_ratio__296","",30,0,6);
   data_mc_ratio__296->SetBinContent(1,0.5148967);
   data_mc_ratio__296->SetBinContent(2,0.5246324);
   data_mc_ratio__296->SetBinContent(3,0.4811049);
   data_mc_ratio__296->SetBinContent(4,0.5785969);
   data_mc_ratio__296->SetBinContent(5,0.5433451);
   data_mc_ratio__296->SetBinContent(6,0.5464125);
   data_mc_ratio__296->SetBinContent(7,0.5407066);
   data_mc_ratio__296->SetBinContent(8,0.5508789);
   data_mc_ratio__296->SetBinContent(9,0.8061901);
   data_mc_ratio__296->SetBinContent(10,0.6145213);
   data_mc_ratio__296->SetBinContent(11,0.537977);
   data_mc_ratio__296->SetBinContent(12,0.4985024);
   data_mc_ratio__296->SetBinContent(13,0.4843386);
   data_mc_ratio__296->SetBinContent(14,0.9062623);
   data_mc_ratio__296->SetBinContent(15,0.4569114);
   data_mc_ratio__296->SetBinContent(16,0.6808684);
   data_mc_ratio__296->SetBinContent(17,0.4649111);
   data_mc_ratio__296->SetBinContent(18,0.3571335);
   data_mc_ratio__296->SetBinContent(19,0.5917313);
   data_mc_ratio__296->SetBinContent(20,0.581684);
   data_mc_ratio__296->SetBinContent(21,0.6426925);
   data_mc_ratio__296->SetBinContent(22,0.2336128);
   data_mc_ratio__296->SetBinContent(23,1.662763);
   data_mc_ratio__296->SetBinContent(24,0.1085066);
   data_mc_ratio__296->SetBinContent(25,1.938618);
   data_mc_ratio__296->SetBinContent(26,0.993172);
   data_mc_ratio__296->SetBinContent(27,1.753555);
   data_mc_ratio__296->SetBinContent(28,8.121363);
   data_mc_ratio__296->SetBinContent(29,1.252246);
   data_mc_ratio__296->SetBinContent(30,15.42827);
   data_mc_ratio__296->SetBinContent(31,2.248757);
   data_mc_ratio__296->SetBinError(1,0.002730597);
   data_mc_ratio__296->SetBinError(2,0.001504939);
   data_mc_ratio__296->SetBinError(3,0.001655668);
   data_mc_ratio__296->SetBinError(4,0.002452034);
   data_mc_ratio__296->SetBinError(5,0.002885077);
   data_mc_ratio__296->SetBinError(6,0.003591013);
   data_mc_ratio__296->SetBinError(7,0.004206846);
   data_mc_ratio__296->SetBinError(8,0.004963881);
   data_mc_ratio__296->SetBinError(9,0.008274385);
   data_mc_ratio__296->SetBinError(10,0.007143665);
   data_mc_ratio__296->SetBinError(11,0.006806564);
   data_mc_ratio__296->SetBinError(12,0.006791308);
   data_mc_ratio__296->SetBinError(13,0.007104213);
   data_mc_ratio__296->SetBinError(14,0.01421599);
   data_mc_ratio__296->SetBinError(15,0.0075453);
   data_mc_ratio__296->SetBinError(16,0.01173214);
   data_mc_ratio__296->SetBinError(17,0.008893037);
   data_mc_ratio__296->SetBinError(18,0.007171413);
   data_mc_ratio__296->SetBinError(19,0.01375747);
   data_mc_ratio__296->SetBinError(20,0.0153876);
   data_mc_ratio__296->SetBinError(21,0.02121201);
   data_mc_ratio__296->SetBinError(22,0.01057515);
   data_mc_ratio__296->SetBinError(23,0.09616008);
   data_mc_ratio__296->SetBinError(24,0.007523582);
   data_mc_ratio__296->SetBinError(25,0.1513806);
   data_mc_ratio__296->SetBinError(26,0.1046895);
   data_mc_ratio__296->SetBinError(27,0.2158477);
   data_mc_ratio__296->SetBinError(28,1.238496);
   data_mc_ratio__296->SetBinError(29,0.2031411);
   data_mc_ratio__296->SetBinError(30,2.380633);
   data_mc_ratio__296->SetBinError(31,1.705904);
   data_mc_ratio__296->SetMinimum(0.4);
   data_mc_ratio__296->SetMaximum(1.6);
   data_mc_ratio__296->SetEntries(98.3247);
   data_mc_ratio__296->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__296->SetLineColor(ci);
   data_mc_ratio__296->SetLineWidth(2);
   data_mc_ratio__296->SetMarkerStyle(20);
   data_mc_ratio__296->SetMarkerSize(1.2);
   data_mc_ratio__296->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   data_mc_ratio__296->GetXaxis()->SetRange(1,30);
   data_mc_ratio__296->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__296->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__296->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__296->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__296->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__296->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__296->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__296->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__296->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__296->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__296->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__296->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__296->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__296->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__296->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__296->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__296->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1296[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1296[30] = {
   0.03642784,
   0.02893015,
   0.1223298,
   0.04964844,
   0.06365378,
   0.07971149,
   0.1004095,
   0.118022,
   0.09983079,
   0.1089299,
   0.211246,
   0.1992271,
   0.1350169,
   0.1455406,
   0.1550439,
   0.3531067,
   0.2803458,
   0.3140683,
   0.2218186,
   0.275151,
   0.3574345,
   0.6994766,
   0.2784523,
   0.7619988,
   0.4493227,
   0.4366678,
   0.7790524,
   0.126079,
   0.4952731,
   0.1723001};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1296,Graph_from_mc_statistical_error_fy1296,Graph_from_mc_statistical_error_fex1296,Graph_from_mc_statistical_error_fey1296);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1296 = new TH1F("Graph_Graph_from_mc_statistical_error1296","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1296->SetMinimum(0.06513713);
   Graph_Graph_from_mc_statistical_error1296->SetMaximum(1.934863);
   Graph_Graph_from_mc_statistical_error1296->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1296->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1296->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1296->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1296->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1296);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->Modified();
   Z_dR_Bj0_algo_all->cd();
   Z_dR_Bj0_algo_all->SetSelected(Z_dR_Bj0_algo_all);
}
