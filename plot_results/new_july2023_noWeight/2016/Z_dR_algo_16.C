void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Thu Aug  3 12:24:20 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(0,0,1,1);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetFillStyle(4000);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetFrameFillStyle(1000);
   Z_dR_algo_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-589.3855,6.314516,588806);
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
   st->SetMaximum(504634.8);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",30,0,6);
   st_stack_113->SetMinimum(0.01);
   st_stack_113->SetMaximum(529866.5);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetRange(1,30);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetLabelSize(0.035);
   st_stack_113->GetXaxis()->SetTitleSize(0.035);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/0.2");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetLabelSize(0.05);
   st_stack_113->GetYaxis()->SetTitleSize(0.057);
   st_stack_113->GetYaxis()->SetTitleOffset(1.2);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetLabelSize(0.035);
   st_stack_113->GetZaxis()->SetTitleSize(0.035);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *VbbHcc_algo_Z_dR_stack_1 = new TH1D("VbbHcc_algo_Z_dR_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(2,53.84772);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(3,158067.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(4,193742.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(5,157975.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(6,171079.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(7,167252.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(8,171949.7);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(9,176393.5);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(10,197879.2);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(11,194068.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(12,191129.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(13,163815.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(14,166270.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(15,147506);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(16,134282);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(17,135724.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(18,132559.4);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(19,102657.3);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(20,81163.17);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(21,75678.25);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(22,68521.47);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(23,70606.62);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(24,50972.46);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(25,52589.6);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(26,44130.54);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(27,48547.55);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(28,38903.03);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(29,32094.65);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(30,22117.64);
   VbbHcc_algo_Z_dR_stack_1->SetBinContent(31,17960.1);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(2,25.2071);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(3,6992.107);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(4,6672.433);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(5,6693.358);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(6,7223.999);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(7,7041.892);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(8,7673.562);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(9,7427.398);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(10,21557.72);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(11,8859.9);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(12,21700.23);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(13,7336.053);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(14,8166.114);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(15,7486.821);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(16,6548.654);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(17,21100.34);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(18,21094.43);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(19,7223.526);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(20,5096.227);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(21,4803.66);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(22,4835.906);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(23,5247.061);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(24,3760.733);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(25,4471.797);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(26,3615.449);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(27,4593.599);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(28,3285.062);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(29,3020.332);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(30,2340.015);
   VbbHcc_algo_Z_dR_stack_1->SetBinError(31,1734.3);
   VbbHcc_algo_Z_dR_stack_1->SetEntries(135373);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_2 = new TH1D("VbbHcc_algo_Z_dR_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(2,0.5919919);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(3,858.9627);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(4,1470.175);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(5,1674.777);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(6,1775.605);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(7,1778.366);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(8,1667.06);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(9,1561.137);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(10,1419.584);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(11,1297.691);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(12,1159.87);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(13,1041.9);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(14,937.7366);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(15,869.7962);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(16,802.842);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(17,687.5246);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(18,618.2101);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(19,564.8405);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(20,519.7599);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(21,509.4178);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(22,476.082);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(23,472.1626);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(24,464.4497);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(25,437.0772);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(26,406.4462);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(27,339.0379);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(28,297.5556);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(29,249.4122);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(30,170.8038);
   VbbHcc_algo_Z_dR_stack_2->SetBinContent(31,133.988);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(2,0.292456);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(3,10.98056);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(4,14.17638);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(5,14.95109);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(6,15.30747);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(7,15.30426);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(8,14.89995);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(9,14.51041);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(10,13.8883);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(11,13.41528);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(12,12.49043);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(13,11.76208);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(14,11.07404);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(15,10.66855);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(16,10.17298);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(17,9.46109);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(18,8.978111);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(19,8.674837);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(20,8.313733);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(21,8.394196);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(22,8.029645);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(23,8.057396);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(24,8.064563);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(25,7.654383);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(26,7.342811);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(27,6.656947);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(28,6.243031);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(29,5.785071);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(30,4.839347);
   VbbHcc_algo_Z_dR_stack_2->SetBinError(31,4.111995);
   VbbHcc_algo_Z_dR_stack_2->SetEntries(358903);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_2,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_3 = new TH1D("VbbHcc_algo_Z_dR_stack_3","",30,0,6);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(2,10.90655);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(3,15508.63);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(4,30057.61);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(5,36045.21);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(6,37653.24);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(7,34822.49);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(8,29866.81);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(9,24801.14);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(10,20392.85);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(11,16943.09);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(12,14476.43);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(13,12721.26);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(14,11432.17);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(15,10518.66);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(16,9779.593);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(17,8748.509);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(18,8063.033);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(19,7494.158);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(20,7091.274);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(21,6757.867);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(22,6612.194);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(23,6618.229);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(24,6679.964);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(25,6706.958);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(26,6514.331);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(27,6003.15);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(28,5196.417);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(29,4088.244);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(30,2539.453);
   VbbHcc_algo_Z_dR_stack_3->SetBinContent(31,1813.436);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(2,0.8243987);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(3,31.40171);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(4,43.79345);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(5,47.95013);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(6,48.91694);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(7,46.91249);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(8,43.31638);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(9,39.3394);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(10,35.56059);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(11,32.30877);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(12,29.7893);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(13,27.86918);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(14,26.38669);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(15,25.28199);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(16,24.35902);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(17,23.05361);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(18,22.15589);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(19,21.38985);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(20,20.82247);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(21,20.35898);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(22,20.19564);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(23,20.24548);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(24,20.38823);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(25,20.47629);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(26,20.2296);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(27,19.44823);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(28,18.11189);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(29,16.05663);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(30,12.6279);
   VbbHcc_algo_Z_dR_stack_3->SetBinError(31,10.62106);
   VbbHcc_algo_Z_dR_stack_3->SetEntries(6548404);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Z_dR_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_3->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_3,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_4 = new TH1D("VbbHcc_algo_Z_dR_stack_4","",30,0,6);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(2,1.394606);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(3,739.1681);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(4,1147.85);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(5,1062.515);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(6,1040.118);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(7,970.4397);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(8,893.8806);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(9,821.9832);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(10,777.2374);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(11,737.1807);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(12,714.7283);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(13,634.3962);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(14,607.0122);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(15,531.4764);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(16,501.9397);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(17,468.5452);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(18,385.5099);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(19,366.7899);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(20,368.4428);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(21,351.2933);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(22,303.1784);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(23,265.7285);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(24,238.8047);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(25,253.4661);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(26,242.9413);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(27,185.5359);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(28,179.857);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(29,135.5467);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(30,131.8094);
   VbbHcc_algo_Z_dR_stack_4->SetBinContent(31,85.04742);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(2,0.5227287);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(3,15.65126);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(4,25.28578);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(5,26.8584);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(6,31.18635);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(7,32.34592);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(8,29.28249);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(9,26.48077);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(10,25.85434);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(11,24.93713);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(12,24.88237);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(13,23.4207);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(14,23.02916);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(15,20.95142);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(16,19.879);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(17,19.57463);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(18,16.11599);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(19,17.03886);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(20,18.55546);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(21,18.67082);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(22,16.70021);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(23,15.2024);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(24,13.12183);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(25,15.97458);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(26,16.11788);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(27,12.21849);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(28,11.32553);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(29,8.355842);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(30,11.161);
   VbbHcc_algo_Z_dR_stack_4->SetBinError(31,7.004155);
   VbbHcc_algo_Z_dR_stack_4->SetEntries(93897);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Z_dR_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_4->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_4,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_5 = new TH1D("VbbHcc_algo_Z_dR_stack_5","",30,0,6);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(2,0.0454373);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(3,485.0482);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(4,609.1776);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(5,538.43);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(6,486.0051);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(7,429.085);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(8,449.9994);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(9,434.261);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(10,414.8025);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(11,377.0393);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(12,397.4486);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(13,303.2255);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(14,296.3238);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(15,301.6458);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(16,277.8276);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(17,224.5086);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(18,210.3651);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(19,188.0823);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(20,167.1707);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(21,160.6665);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(22,124.4132);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(23,118.8872);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(24,111.4992);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(25,122.3193);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(26,86.08556);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(27,134.6129);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(28,90.10873);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(29,91.1228);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(30,72.30151);
   VbbHcc_algo_Z_dR_stack_5->SetBinContent(31,40.58877);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(2,0.04479787);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(3,20.41732);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(4,30.18557);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(5,30.42959);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(6,29.72926);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(7,25.50484);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(8,29.84818);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(9,28.06994);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(10,28.6009);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(11,25.95639);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(12,30.18695);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(13,22.96028);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(14,22.02075);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(15,23.63281);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(16,23.27465);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(17,17.89584);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(18,19.46011);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(19,17.35808);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(20,15.11431);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(21,17.97547);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(22,12.90304);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(23,12.72043);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(24,12.49986);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(25,13.97027);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(26,8.482322);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(27,18.46401);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(28,10.54675);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(29,12.15158);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(30,11.63671);
   VbbHcc_algo_Z_dR_stack_5->SetBinError(31,4.378453);
   VbbHcc_algo_Z_dR_stack_5->SetEntries(71986);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_dR_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_5->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_5,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_6 = new TH1D("VbbHcc_algo_Z_dR_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(3,5.240403);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(4,7.524681);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(5,5.106033);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(6,4.165448);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(7,4.165448);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(8,4.434187);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(9,3.359232);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(10,3.090494);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(11,1.88117);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(12,4.299818);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(13,4.971664);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(14,3.090494);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(15,2.956125);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(16,3.359232);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(17,2.418647);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(18,1.343693);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(19,2.418647);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(20,1.343693);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(21,1.209324);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(22,2.418647);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(23,1.074954);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(24,1.074954);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(25,1.209324);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(26,0.8062158);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(27,1.074954);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(28,0.9405851);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(29,1.074954);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(30,0.6718465);
   VbbHcc_algo_Z_dR_stack_6->SetBinContent(31,0.2687386);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(3,0.839136);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(4,1.005528);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(5,0.828308);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(6,0.7481366);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(7,0.7481366);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(8,0.7718929);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(9,0.6718465);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(10,0.6444125);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(11,0.5027639);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(12,0.7601075);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(13,0.8173365);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(14,0.6444125);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(15,0.6302479);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(16,0.6718465);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(17,0.5700807);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(18,0.424913);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(19,0.5700807);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(20,0.424913);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(21,0.4031079);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(22,0.5700807);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(23,0.3800538);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(24,0.3800538);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(25,0.4031079);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(26,0.3291362);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(27,0.3800538);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(28,0.3555077);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(29,0.3800538);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(30,0.3004589);
   VbbHcc_algo_Z_dR_stack_6->SetBinError(31,0.1900269);
   VbbHcc_algo_Z_dR_stack_6->SetEntries(573);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_6->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_6,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_7 = new TH1D("VbbHcc_algo_Z_dR_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(2,0.1090586);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(3,10.14245);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(4,14.72292);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(5,11.88739);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(6,8.83375);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(7,7.088812);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(8,4.580463);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(9,4.471404);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(10,4.144228);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(11,4.144228);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(12,4.580463);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(13,4.580463);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(14,4.689521);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(15,4.03517);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(16,4.362346);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(17,4.03517);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(18,3.489876);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(19,2.726466);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(20,3.598935);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(21,2.835525);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(22,1.853997);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(23,1.744938);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(24,1.526821);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(25,2.181173);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(26,1.63588);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(27,2.39929);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(28,2.835525);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(29,1.63588);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(30,0.9815278);
   VbbHcc_algo_Z_dR_stack_7->SetBinContent(31,0.5452932);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(2,0.1090586);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(3,1.051723);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(4,1.267147);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(5,1.138606);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(6,0.9815278);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(7,0.8792589);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(8,0.7067808);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(9,0.698316);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(10,0.6722826);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(11,0.6722826);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(12,0.7067808);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(13,0.7067808);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(14,0.7151453);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(15,0.6633778);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(16,0.6897474);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(17,0.6633778);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(18,0.6169288);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(19,0.5452932);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(20,0.6264942);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(21,0.5560921);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(22,0.4496603);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(23,0.4362346);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(24,0.4080601);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(25,0.4877251);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(26,0.4223823);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(27,0.5115304);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(28,0.5560921);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(29,0.4223823);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(30,0.3271759);
   VbbHcc_algo_Z_dR_stack_7->SetBinError(31,0.2438625);
   VbbHcc_algo_Z_dR_stack_7->SetEntries(1159);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_7->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_7,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_8 = new TH1D("VbbHcc_algo_Z_dR_stack_8","",30,0,6);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(3,12.64677);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(4,19.21336);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(5,17.75412);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(6,13.37639);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(7,11.43074);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(8,7.782629);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(9,4.377729);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(10,6.8098);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(11,6.323386);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(12,6.080179);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(13,7.053007);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(14,6.566593);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(15,6.080179);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(16,5.10735);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(17,3.161693);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(18,2.918486);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(19,3.4049);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(20,3.891314);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(21,2.675279);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(22,2.188864);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(23,1.945657);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(24,1.216036);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(25,1.216036);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(26,0.7296215);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(27,2.432072);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(28,1.459243);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(29,2.675279);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(30,0.7296215);
   VbbHcc_algo_Z_dR_stack_8->SetBinContent(31,0.4864143);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(3,1.753792);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(4,2.161672);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(5,2.077963);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(6,1.803673);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(7,1.667344);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(8,1.375787);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(9,1.031841);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(10,1.286931);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(11,1.240118);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(12,1.216036);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(13,1.309711);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(14,1.263741);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(15,1.216036);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(16,1.114515);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(17,0.8768959);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(18,0.8424943);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(19,0.9099978);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(20,0.9728286);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(21,0.8066269);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(22,0.7296215);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(23,0.6878937);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(24,0.5438277);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(25,0.5438277);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(26,0.4212471);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(27,0.7690885);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(28,0.5957334);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(29,0.8066269);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(30,0.4212471);
   VbbHcc_algo_Z_dR_stack_8->SetBinError(31,0.3439469);
   VbbHcc_algo_Z_dR_stack_8->SetEntries(665);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_8->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_8,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_9 = new TH1D("VbbHcc_algo_Z_dR_stack_9","",30,0,6);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(2,0.004121852);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(3,7.757326);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(4,13.00582);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(5,12.35457);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(6,10.38295);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(7,7.2682);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(8,5.358408);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(9,3.999571);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(10,3.45686);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(11,3.166957);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(12,3.069406);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(13,2.881175);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(14,2.694317);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(15,2.40991);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(16,2.104893);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(17,1.985359);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(18,1.793006);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(19,1.689959);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(20,1.61714);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(21,1.503102);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(22,1.239304);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(23,1.244799);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(24,1.17885);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(25,1.214572);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(26,1.298383);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(27,1.346472);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(28,1.437153);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(29,1.22419);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(30,0.8037612);
   VbbHcc_algo_Z_dR_stack_9->SetBinContent(31,0.4850046);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(2,0.002379753);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(3,0.1032385);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(4,0.1336763);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(5,0.1302865);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(6,0.1194389);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(7,0.09993072);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(8,0.0858032);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(9,0.07412971);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(10,0.06891702);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(11,0.06596395);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(12,0.06494007);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(13,0.06291735);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(14,0.06084291);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(15,0.05754213);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(16,0.05377749);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(17,0.0522282);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(18,0.04963367);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(19,0.04818632);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(20,0.04713673);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(21,0.04544434);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(22,0.0412643);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(23,0.04135569);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(24,0.04024527);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(25,0.04085049);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(26,0.04223642);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(27,0.04301146);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(28,0.04443621);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(29,0.04101191);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(30,0.03323144);
   VbbHcc_algo_Z_dR_stack_9->SetBinError(31,0.02581419);
   VbbHcc_algo_Z_dR_stack_9->SetEntries(72765);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Z_dR_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_9->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_9,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_10 = new TH1D("VbbHcc_algo_Z_dR_stack_10","",30,0,6);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(2,0.001074139);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(3,1.742969);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(4,3.876566);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(5,4.647082);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(6,4.320902);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(7,3.073469);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(8,2.16976);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(9,1.693201);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(10,1.522412);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(11,1.506658);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(12,1.45689);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(13,1.437914);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(14,1.313672);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(15,1.199097);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(16,1.091683);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(17,0.9624282);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(18,0.8893868);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(19,0.844273);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(20,0.7837631);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(21,0.7368591);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(22,0.6552246);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(23,0.5868377);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(24,0.5213153);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(25,0.5263279);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(26,0.5517492);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(27,0.6108268);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(28,0.5957889);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(29,0.4468417);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(30,0.2828565);
   VbbHcc_algo_Z_dR_stack_10->SetBinContent(31,0.1793812);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(2,0.0006201542);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(3,0.02498126);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(4,0.03725574);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(5,0.04079056);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(6,0.03933297);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(7,0.03317294);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(8,0.02787247);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(9,0.02462202);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(10,0.02334725);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(11,0.02322613);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(12,0.02283931);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(13,0.02269007);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(14,0.02168767);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(15,0.02072033);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(16,0.01977051);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(17,0.01856324);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(18,0.01784493);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(19,0.01738645);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(20,0.01675182);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(21,0.01624283);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(22,0.01531668);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(23,0.01449534);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(24,0.01366217);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(25,0.0137277);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(26,0.01405531);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(27,0.01478865);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(28,0.01460548);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(29,0.01264871);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(30,0.01006358);
   VbbHcc_algo_Z_dR_stack_10->SetBinError(31,0.008014159);
   VbbHcc_algo_Z_dR_stack_10->SetEntries(112352);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Z_dR_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_10->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_10,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_11 = new TH1D("VbbHcc_algo_Z_dR_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(3,0.08752024);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(4,0.1066653);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(5,0.1011953);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(6,0.09572526);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(7,0.08205022);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(8,0.04376012);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(9,0.04102511);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(10,0.0355551);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(11,0.04102511);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(12,0.03282009);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(13,0.0382901);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(14,0.03008508);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(15,0.0355551);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(16,0.0382901);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(17,0.02188006);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(18,0.02188006);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(19,0.01367504);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(20,0.02188006);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(21,0.01914505);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(22,0.0355551);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(23,0.01641004);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(24,0.01367504);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(25,0.008205022);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(26,0.01367504);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(27,0.005470015);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(28,0.01367504);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(29,0.008205022);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(30,0.002735007);
   VbbHcc_algo_Z_dR_stack_11->SetBinContent(31,0.002735007);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(3,0.01547154);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(4,0.01708012);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(5,0.0166364);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(6,0.01618052);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(7,0.01498025);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(8,0.01094003);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(9,0.01059264);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(10,0.00986121);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(11,0.01059264);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(12,0.009474344);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(13,0.01023346);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(14,0.009070994);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(15,0.00986121);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(16,0.01023346);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(17,0.007735769);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(18,0.007735769);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(19,0.006115663);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(20,0.007735769);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(21,0.00723615);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(22,0.00986121);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(23,0.006699373);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(24,0.006115663);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(25,0.004737172);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(26,0.006115663);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(27,0.003867885);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(28,0.006115663);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(29,0.004737172);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(30,0.002735007);
   VbbHcc_algo_Z_dR_stack_11->SetBinError(31,0.002735007);
   VbbHcc_algo_Z_dR_stack_11->SetEntries(376);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_11->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_11,"");
   
   TH1D *VbbHcc_algo_Z_dR_stack_12 = new TH1D("VbbHcc_algo_Z_dR_stack_12","",30,0,6);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(3,0.01964962);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(4,0.04072831);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(5,0.04251464);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(6,0.04072831);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(7,0.02500861);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(8,0.01679149);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(9,0.01393337);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(10,0.01321884);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(11,0.0146479);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(12,0.02179322);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(13,0.0125043);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(14,0.01500517);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(15,0.01393337);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(16,0.01214704);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(17,0.01214704);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(18,0.01321884);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(19,0.01071798);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(20,0.01036071);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(21,0.006073519);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(22,0.01000344);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(23,0.007502583);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(24,0.003929924);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(25,0.005716254);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(26,0.006788051);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(27,0.00428719);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(28,0.004644456);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(29,0.002143595);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(30,0.002143595);
   VbbHcc_algo_Z_dR_stack_12->SetBinContent(31,0.002143595);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(3,0.002649554);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(4,0.003814555);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(5,0.00389731);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(6,0.003814555);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(7,0.002989101);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(8,0.002449291);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(9,0.002231125);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(10,0.002173163);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(11,0.002287618);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(12,0.002790335);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(13,0.002113613);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(14,0.002315347);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(15,0.002231125);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(16,0.0020832);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(17,0.0020832);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(18,0.002173163);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(19,0.001956826);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(20,0.001923935);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(21,0.001473045);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(22,0.001890473);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(23,0.001637198);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(24,0.001184917);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(25,0.001429063);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(26,0.001557286);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(27,0.001237605);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(28,0.00128814);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(29,0.000875119);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(30,0.000875119);
   VbbHcc_algo_Z_dR_stack_12->SetBinError(31,0.000875119);
   VbbHcc_algo_Z_dR_stack_12->SetEntries(1132);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR_stack_12->SetLineColor(ci);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Z_dR__309 = new TH1D("VbbHcc_algo_Z_dR__309","",30,0,6);
   VbbHcc_algo_Z_dR__309->SetBinContent(2,42);
   VbbHcc_algo_Z_dR__309->SetBinContent(3,50386);
   VbbHcc_algo_Z_dR__309->SetBinContent(4,61159);
   VbbHcc_algo_Z_dR__309->SetBinContent(5,51576);
   VbbHcc_algo_Z_dR__309->SetBinContent(6,49544);
   VbbHcc_algo_Z_dR__309->SetBinContent(7,48781);
   VbbHcc_algo_Z_dR__309->SetBinContent(8,47374);
   VbbHcc_algo_Z_dR__309->SetBinContent(9,46661);
   VbbHcc_algo_Z_dR__309->SetBinContent(10,44620);
   VbbHcc_algo_Z_dR__309->SetBinContent(11,42943);
   VbbHcc_algo_Z_dR__309->SetBinContent(12,40707);
   VbbHcc_algo_Z_dR__309->SetBinContent(13,38601);
   VbbHcc_algo_Z_dR__309->SetBinContent(14,36001);
   VbbHcc_algo_Z_dR__309->SetBinContent(15,34159);
   VbbHcc_algo_Z_dR__309->SetBinContent(16,32487);
   VbbHcc_algo_Z_dR__309->SetBinContent(17,27425);
   VbbHcc_algo_Z_dR__309->SetBinContent(18,24253);
   VbbHcc_algo_Z_dR__309->SetBinContent(19,22135);
   VbbHcc_algo_Z_dR__309->SetBinContent(20,20064);
   VbbHcc_algo_Z_dR__309->SetBinContent(21,18104);
   VbbHcc_algo_Z_dR__309->SetBinContent(22,16418);
   VbbHcc_algo_Z_dR__309->SetBinContent(23,15364);
   VbbHcc_algo_Z_dR__309->SetBinContent(24,14210);
   VbbHcc_algo_Z_dR__309->SetBinContent(25,12918);
   VbbHcc_algo_Z_dR__309->SetBinContent(26,11876);
   VbbHcc_algo_Z_dR__309->SetBinContent(27,10741);
   VbbHcc_algo_Z_dR__309->SetBinContent(28,9890);
   VbbHcc_algo_Z_dR__309->SetBinContent(29,8703);
   VbbHcc_algo_Z_dR__309->SetBinContent(30,6351);
   VbbHcc_algo_Z_dR__309->SetBinContent(31,5611);
   VbbHcc_algo_Z_dR__309->SetEntries(849133);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_dR__309->SetLineColor(ci);
   VbbHcc_algo_Z_dR__309->SetLineWidth(2);
   VbbHcc_algo_Z_dR__309->SetMarkerStyle(20);
   VbbHcc_algo_Z_dR__309->SetMarkerSize(1.2);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR__309->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR__309->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__309->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Z_dR_fx1225[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fy1225[30] = {
   0,
   66.90056,
   175696.8,
   227085.6,
   197348,
   212075.2,
   205286.4,
   204851.9,
   204029.9,
   220902.8,
   213440.7,
   207897.3,
   178537,
   179562.6,
   159744.3,
   145660.3,
   145865.8,
   141847,
   111282.3,
   89321.08,
   83466.48,
   76045.74,
   78088.25,
   58472.71,
   60115.78,
   51385.39,
   55217.76,
   44674.25,
   36666.05,
   25035.48};
   Double_t Graph_from_VbbHcc_algo_Z_dR_fex1225[30] = {
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
   Double_t Graph_from_VbbHcc_algo_Z_dR_fey1225[30] = {
   0,
   25.22797,
   6992.233,
   6672.709,
   6693.67,
   7224.309,
   7042.186,
   7673.813,
   7427.616,
   21557.79,
   8860.042,
   21700.29,
   7336.189,
   8166.227,
   7486.938,
   6548.779,
   21100.37,
   21094.46,
   7223.604,
   5096.333,
   4803.781,
   4836.001,
   5247.144,
   3760.841,
   4471.9,
   3615.559,
   4593.698,
   3285.154,
   3020.416,
   2340.11};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_Z_dR_fx1225,Graph_from_VbbHcc_algo_Z_dR_fy1225,Graph_from_VbbHcc_algo_Z_dR_fex1225,Graph_from_VbbHcc_algo_Z_dR_fey1225);
   gre->SetName("Graph_from_VbbHcc_algo_Z_dR");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Z_dR1225 = new TH1F("Graph_Graph_from_VbbHcc_algo_Z_dR1225","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetMaximum(266706.6);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Z_dR1225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Z_dR1225);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Z_dR","MC unc. (stat.)","fl");

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
   Z_dR_algo_16->cd();
  
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
   
   TH1D *data_mc_ratio__310 = new TH1D("data_mc_ratio__310","",30,0,6);
   data_mc_ratio__310->SetBinContent(2,0.6277974);
   data_mc_ratio__310->SetBinContent(3,0.2867781);
   data_mc_ratio__310->SetBinContent(4,0.2693213);
   data_mc_ratio__310->SetBinContent(5,0.2613454);
   data_mc_ratio__310->SetBinContent(6,0.2336152);
   data_mc_ratio__310->SetBinContent(7,0.2376242);
   data_mc_ratio__310->SetBinContent(8,0.2312598);
   data_mc_ratio__310->SetBinContent(9,0.2286968);
   data_mc_ratio__310->SetBinContent(10,0.2019893);
   data_mc_ratio__310->SetBinContent(11,0.2011941);
   data_mc_ratio__310->SetBinContent(12,0.1958034);
   data_mc_ratio__310->SetBinContent(13,0.2162072);
   data_mc_ratio__310->SetBinContent(14,0.2004928);
   data_mc_ratio__310->SetBinContent(15,0.2138354);
   data_mc_ratio__310->SetBinContent(16,0.2230326);
   data_mc_ratio__310->SetBinContent(17,0.1880153);
   data_mc_ratio__310->SetBinContent(18,0.17098);
   data_mc_ratio__310->SetBinContent(19,0.1989085);
   data_mc_ratio__310->SetBinContent(20,0.2246278);
   data_mc_ratio__310->SetBinContent(21,0.2169015);
   data_mc_ratio__310->SetBinContent(22,0.2158964);
   data_mc_ratio__310->SetBinContent(23,0.1967518);
   data_mc_ratio__310->SetBinContent(24,0.2430193);
   data_mc_ratio__310->SetBinContent(25,0.2148853);
   data_mc_ratio__310->SetBinContent(26,0.2311163);
   data_mc_ratio__310->SetBinContent(27,0.1945207);
   data_mc_ratio__310->SetBinContent(28,0.2213803);
   data_mc_ratio__310->SetBinContent(29,0.2373586);
   data_mc_ratio__310->SetBinContent(30,0.25368);
   data_mc_ratio__310->SetBinContent(31,0.2800581);
   data_mc_ratio__310->SetBinError(2,0.09687125);
   data_mc_ratio__310->SetBinError(3,0.001277589);
   data_mc_ratio__310->SetBinError(4,0.001089032);
   data_mc_ratio__310->SetBinError(5,0.001150777);
   data_mc_ratio__310->SetBinError(6,0.001049556);
   data_mc_ratio__310->SetBinError(7,0.001075883);
   data_mc_ratio__310->SetBinError(8,0.001062503);
   data_mc_ratio__310->SetBinError(9,0.001058725);
   data_mc_ratio__310->SetBinError(10,0.0009562328);
   data_mc_ratio__310->SetBinError(11,0.0009708876);
   data_mc_ratio__310->SetBinError(12,0.0009704781);
   data_mc_ratio__310->SetBinError(13,0.001100452);
   data_mc_ratio__310->SetBinError(14,0.001056675);
   data_mc_ratio__310->SetBinError(15,0.001156983);
   data_mc_ratio__310->SetBinError(16,0.00123741);
   data_mc_ratio__310->SetBinError(17,0.001135324);
   data_mc_ratio__310->SetBinError(18,0.001097899);
   data_mc_ratio__310->SetBinError(19,0.001336945);
   data_mc_ratio__310->SetBinError(20,0.001585823);
   data_mc_ratio__310->SetBinError(21,0.001612038);
   data_mc_ratio__310->SetBinError(22,0.001684943);
   data_mc_ratio__310->SetBinError(23,0.001587327);
   data_mc_ratio__310->SetBinError(24,0.002038655);
   data_mc_ratio__310->SetBinError(25,0.001890641);
   data_mc_ratio__310->SetBinError(26,0.002120779);
   data_mc_ratio__310->SetBinError(27,0.00187691);
   data_mc_ratio__310->SetBinError(28,0.00222608);
   data_mc_ratio__310->SetBinError(29,0.002544312);
   data_mc_ratio__310->SetBinError(30,0.003183209);
   data_mc_ratio__310->SetBinError(31,0.02453005);
   data_mc_ratio__310->SetMinimum(0.4);
   data_mc_ratio__310->SetMaximum(1.6);
   data_mc_ratio__310->SetEntries(651.4495);
   data_mc_ratio__310->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__310->SetLineColor(ci);
   data_mc_ratio__310->SetLineWidth(2);
   data_mc_ratio__310->SetMarkerStyle(20);
   data_mc_ratio__310->SetMarkerSize(1.2);
   data_mc_ratio__310->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__310->GetXaxis()->SetRange(1,30);
   data_mc_ratio__310->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__310->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__310->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__310->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__310->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__310->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__310->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__310->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__310->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__310->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__310->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__310->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__310->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__310->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__310->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1226[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1226[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1226[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1226[30] = {
   0,
   0.3770965,
   0.03979716,
   0.02938411,
   0.03391811,
   0.03406484,
   0.0343042,
   0.0374603,
   0.03640454,
   0.0975895,
   0.04151056,
   0.1043798,
   0.04109057,
   0.04547845,
   0.04686825,
   0.04495925,
   0.144656,
   0.1487128,
   0.06491241,
   0.05705633,
   0.05755341,
   0.06359332,
   0.06719505,
   0.06431788,
   0.07438812,
   0.07036162,
   0.0831924,
   0.07353574,
   0.08237638,
   0.09347175};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1226,Graph_from_mc_statistical_error_fy1226,Graph_from_mc_statistical_error_fex1226,Graph_from_mc_statistical_error_fey1226);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1226 = new TH1F("Graph_Graph_from_mc_statistical_error1226","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1226->SetMinimum(0.5474842);
   Graph_Graph_from_mc_statistical_error1226->SetMaximum(1.452516);
   Graph_Graph_from_mc_statistical_error1226->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1226->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1226);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
