void H_mass_tags_18_logY()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Thu Aug 10 12:19:52 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(0,0,1,1);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetFillStyle(4000);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetFrameFillStyle(1000);
   H_mass_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.818892,315.7258,10.62169);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLogy();
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(6.005274e+08);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",40,0,400);
   st_stack_7->SetMinimum(0.001565125);
   st_stack_7->SetMaximum(1.895088e+09);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetRange(1,30);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetLabelSize(0.035);
   st_stack_7->GetXaxis()->SetTitleSize(0.035);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Events/10.0");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetLabelSize(0.05);
   st_stack_7->GetYaxis()->SetTitleSize(0.057);
   st_stack_7->GetYaxis()->SetTitleOffset(1.2);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetLabelSize(0.035);
   st_stack_7->GetZaxis()->SetTitleSize(0.035);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,97.84051);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,2194);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,5166.577);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,7909.059);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,8243.909);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,6811.79);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,4463.013);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,5470.469);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,5288.155);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,5198.996);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,3485.096);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,6126.714);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,4676.963);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,4683.799);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,6276.274);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,4758.859);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,2120.34);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,3708.234);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,5476.095);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,2694.352);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,4140.728);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,4334.402);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,3838.984);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,2704.878);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,2832.311);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,3448.393);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,2782.596);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,1852.324);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,4094.693);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,3000.002);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,2174.508);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,1665.043);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,5245.313);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,1286.78);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,3811.147);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,2032.625);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,2014.756);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,3653.96);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,90533.43);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,57.33658);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,854.8606);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,1228.515);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,1651.536);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,1494.203);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,1117.495);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,870.2271);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,1171.756);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,1120.74);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,1137.86);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,621.5493);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,1520.269);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,1131.297);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,1127.99);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,1255.946);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,1201.939);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,481.0671);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,876.4463);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,1323.872);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,685.4228);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,986.1135);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,928.1857);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,1103.531);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,729.1536);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,926.7042);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,967.9459);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,884.0146);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,405.4792);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,1074.061);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,825.6959);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,619.6538);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,550.482);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,2090.312);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,270.1761);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,961.8743);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,597.5981);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,662.1676);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,1481.676);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,4719.333);
   VbbHcc_tags_H_mass_stack_1->SetEntries(10038);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_1,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_2 = new TH1D("VbbHcc_tags_H_mass_stack_2","",40,0,400);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.6560561);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,5.224184);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,17.46033);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,21.93269);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,24.214);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,38.05817);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,37.80666);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,33.87053);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,33.6943);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,27.4335);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,34.79745);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,30.41069);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,27.8529);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,28.5835);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,27.68362);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,22.3411);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,24.11654);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,25.19017);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,21.46448);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,19.6674);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,18.92409);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,19.22177);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,19.29439);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,18.04296);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,21.08694);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,17.52376);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,16.7423);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,16.00141);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,16.62965);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,13.31306);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,12.41141);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,14.38845);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,12.61863);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,15.23128);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,14.28681);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,12.2613);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,13.55982);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,11.69425);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,544.0161);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.4104894);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.9431274);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,1.95339);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,2.151552);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,2.08883);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,2.973424);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,2.867006);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,2.750693);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,2.592674);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,2.237);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,2.708983);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,2.602467);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,2.371904);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,2.538699);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,2.377074);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,2.016837);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,2.239975);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,2.540608);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,2.090617);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.985111);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,2.032186);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,1.972621);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,2.033814);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,2.000085);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,2.149347);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.925769);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,1.896403);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,1.796312);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.91584);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,1.674709);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,1.558858);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,1.740039);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,1.528948);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,1.948699);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,1.74816);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,1.6094);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,1.691059);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,1.540044);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,10.95586);
   VbbHcc_tags_H_mass_stack_2->SetEntries(14154);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_mass_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_2,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_3 = new TH1D("VbbHcc_tags_H_mass_stack_3","",40,0,400);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(2,0.2906031);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,12.45514);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,120.7489);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,283.0254);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,416.9463);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,552.492);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,731.3643);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,844.2292);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,805.0853);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,782.7613);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,794.0571);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,771.7014);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,746.9683);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,700.8487);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,651.9704);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,608.1529);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,581.1778);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,537.0934);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,507.0613);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,481.6959);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,459.7068);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,438.8748);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,427.1904);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,412.3076);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,397.4231);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,387.1462);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,371.3985);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,366.8327);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,356.6616);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,342.8847);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,332.786);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,331.8363);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,328.1078);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,305.0741);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,305.1528);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,300.644);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,288.8949);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,284.1432);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,272.5481);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,10548.86);
   VbbHcc_tags_H_mass_stack_3->SetBinError(2,0.1495341);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,1.058325);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,3.64027);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,5.252946);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,6.114583);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,7.276198);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,8.286743);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,9.621191);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,8.582981);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,8.410658);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,8.49635);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,9.083473);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,8.385332);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,8.016066);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,7.715773);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,8.223608);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,7.328089);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,6.962533);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,6.693958);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,6.935204);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,7.141185);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,7.12184);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,6.451388);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,6.97768);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,6.871461);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,5.932216);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,5.70291);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,5.833713);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,5.85606);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,5.489123);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,5.567462);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,5.688496);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,5.859373);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,5.329595);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,5.445094);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,5.263475);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,5.150705);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,5.580551);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,4.916603);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,32.8847);
   VbbHcc_tags_H_mass_stack_3->SetEntries(352917);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_mass_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_3,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_4 = new TH1D("VbbHcc_tags_H_mass_stack_4","",40,0,400);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,1.300987);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,22.01943);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,43.06273);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,53.47443);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,81.36834);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,115.7709);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,178.4435);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,154.7411);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,101.5202);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,76.15676);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,71.30739);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,67.69556);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,62.41938);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,54.68235);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,54.79943);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,70.74575);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,56.67861);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,45.91765);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,56.11815);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,49.14418);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,49.08742);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,50.3994);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,45.13106);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,44.89686);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,43.73777);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,43.47634);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,50.4691);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,49.6086);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,38.79137);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,44.47735);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,38.75411);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,39.83059);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,36.93323);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,44.4256);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,48.08563);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,38.36632);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,45.69183);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,31.52616);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,1569.694);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,0.7897309);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,7.587567);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,6.093896);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,6.391163);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,6.308411);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,6.571526);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,11.73755);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,9.724178);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,6.135175);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,5.251984);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,6.441064);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,6.994535);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,5.833446);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,6.312473);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,7.59588);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,9.980066);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,6.288438);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,4.08627);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,5.594764);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,4.736429);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,4.523276);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,8.579478);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,4.30518);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,5.710811);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,4.131257);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,3.94586);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,4.531448);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,6.295566);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,5.913267);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,4.20072);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,7.028293);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,5.693241);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,5.449071);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,7.12315);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,5.664508);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,9.729715);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,8.450505);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,3.374014);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,31.6454);
   VbbHcc_tags_H_mass_stack_4->SetEntries(18490);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_mass_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_4,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_5 = new TH1D("VbbHcc_tags_H_mass_stack_5","",40,0,400);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(3,0.2790656);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,1.186346);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,1.958585);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,5.638679);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,13.11014);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,12.0912);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,12.09806);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,5.934101);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,3.35534);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,5.972404);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,3.409325);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,8.747515);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,7.583029);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,5.359655);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,7.485921);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,6.58913);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,5.261362);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,12.29774);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,2.755627);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,2.705247);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,6.92417);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,3.417421);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,7.975559);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,6.728344);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,6.481259);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,3.077148);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,1.571248);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,7.301436);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,6.188897);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,4.538699);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,4.770426);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,3.584417);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,2.66659);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,4.226587);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,4.800716);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,2.813533);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,3.595259);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,0.5697469);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,154.6851);
   VbbHcc_tags_H_mass_stack_5->SetBinError(3,0.2790656);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,0.5492284);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,0.6518513);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,1.357848);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,9.374956);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,4.326883);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,3.985011);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,1.136509);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,0.8718597);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,2.353153);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,0.7140551);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,3.359699);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,2.633051);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.183315);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,2.628036);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,2.476794);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,1.147827);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,4.018754);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,0.7547668);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,0.6967051);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,2.133289);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,0.8344969);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,3.655359);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,2.677302);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,2.982605);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.7588693);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,0.6917873);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,2.566487);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,2.780346);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,2.264353);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,2.406117);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,0.9828056);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,0.78573);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,2.29895);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,1.994001);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,0.8015531);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,2.739513);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,0.2380172);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,10.31301);
   VbbHcc_tags_H_mass_stack_5->SetEntries(2375);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_mass_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_5,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_6 = new TH1D("VbbHcc_tags_H_mass_stack_6","",40,0,400);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(7,0.5029805);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(8,0.6599753);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(31,0.4921557);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.3743199);
   VbbHcc_tags_H_mass_stack_6->SetBinError(7,0.5029805);
   VbbHcc_tags_H_mass_stack_6->SetBinError(8,0.6599753);
   VbbHcc_tags_H_mass_stack_6->SetBinError(31,0.4921557);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.3743199);
   VbbHcc_tags_H_mass_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_mass_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_6,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.3856298);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,2.590287);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(10,0.4786962);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.9391289);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.870586);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(16,0.9833285);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(23,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.7556114);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(28,0.4963468);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(36,0.5166625);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,4.873772);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.3856298);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,1.0659);
   VbbHcc_tags_H_mass_stack_7->SetBinError(10,0.4786962);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.6641899);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.6587386);
   VbbHcc_tags_H_mass_stack_7->SetBinError(16,0.9833285);
   VbbHcc_tags_H_mass_stack_7->SetBinError(23,0.5144501);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.5343002);
   VbbHcc_tags_H_mass_stack_7->SetBinError(28,0.4963468);
   VbbHcc_tags_H_mass_stack_7->SetBinError(36,0.5166625);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,1.477998);
   VbbHcc_tags_H_mass_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_7,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_8 = new TH1D("VbbHcc_tags_H_mass_stack_8","",40,0,400);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.7973796);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,0.3068351);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,1.660088);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,2.665522);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,5.610295);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,3.568598);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,2.278947);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,0.7166622);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.6361961);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.3776254);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(16,0.1936072);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,1.008652);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(18,1.255891);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.3068351);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.4058303);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(21,1.115696);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.27396);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,1.13576);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.2830566);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,1.393988);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.9825647);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,2.065095);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(31,0.5898917);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(33,0.5910606);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,1.72655);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.6534525);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.4075756);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(38,1.172423);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,1.864068);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,1.309124);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,35.17198);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.5639229);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.3068351);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.7459019);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.9485048);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,1.414007);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,1.047186);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.841682);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.4634898);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.4505717);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.3776254);
   VbbHcc_tags_H_mass_stack_8->SetBinError(16,0.1936072);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.544845);
   VbbHcc_tags_H_mass_stack_8->SetBinError(18,0.6381678);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.3068351);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.4058303);
   VbbHcc_tags_H_mass_stack_8->SetBinError(21,0.6501087);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.27396);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.5731963);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.2830566);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.7045973);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.5786498);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.8504245);
   VbbHcc_tags_H_mass_stack_8->SetBinError(31,0.4174552);
   VbbHcc_tags_H_mass_stack_8->SetBinError(33,0.4190548);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.7076438);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.471067);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.4075756);
   VbbHcc_tags_H_mass_stack_8->SetBinError(38,0.6001542);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.769353);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.6608276);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,3.412316);
   VbbHcc_tags_H_mass_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_mass_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_8,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_9 = new TH1D("VbbHcc_tags_H_mass_stack_9","",40,0,400);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.00755883);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.1175267);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.1727963);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.4918314);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,1.164949);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,2.42781);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,3.834576);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,3.639492);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,2.757636);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,2.669938);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,2.293478);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,1.450609);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.9713609);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.7214874);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.6081393);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.5584791);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.5949779);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.7245254);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.5200904);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.6538104);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.694922);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.5874082);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.6552595);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.7345918);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.7434186);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.7486486);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.6466327);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.6887721);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.6987512);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.7657272);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.6694848);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.68044);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.7329369);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.7310176);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.7744281);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.7656596);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.7038413);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.815226);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,30.22461);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.004461907);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.01853398);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.02199706);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.03649556);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.05743231);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.08293777);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.1046376);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.1040883);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.08753671);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.09842848);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.1001686);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.06654967);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.05240549);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.05229216);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.04039495);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.03899639);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.04110434);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.04542381);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.03778927);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.04229988);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.04415001);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.04062301);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.0449919);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.04578447);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.04546895);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.04597871);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.04294053);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.04800352);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.04767843);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.04655625);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.04276149);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.04334437);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.05440187);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.04992795);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.04686364);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.06013813);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.04424962);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.06236354);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.3230267);
   VbbHcc_tags_H_mass_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_mass_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_9,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_10 = new TH1D("VbbHcc_tags_H_mass_stack_10","",40,0,400);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.004009126);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.03375319);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.1123737);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.2113257);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.5436799);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,1.117343);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,1.697268);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,1.599942);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,1.279205);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,1.14411);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,1.026757);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.7837319);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.5618872);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.4270067);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.4080484);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.3935146);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.3892752);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.403483);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.3763918);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.4092297);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.4179537);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.4058422);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.396795);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.3886976);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.3846575);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.3913087);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.3760316);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.3782872);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.3823445);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.3530445);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.38337);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.373586);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.341883);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.3554034);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.3499831);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.3537168);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.3436662);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.3497644);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,11.48113);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.001642501);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.004640261);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.008477084);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.01170084);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.01868363);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.02689572);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.03308106);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.03209808);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.0287092);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.02715977);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.02568697);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.02250585);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.01902373);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.01659121);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.01621104);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.01598228);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.01583366);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.0161565);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.01555935);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.01623569);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.01640724);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.01619462);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.0160021);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.01585662);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.0157307);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.01585566);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.01559072);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.01564725);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.01574036);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.01508085);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.01576076);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.01556643);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.01482333);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.01513031);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.01510294);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.01511208);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.01489342);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.0150127);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.08601961);
   VbbHcc_tags_H_mass_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_mass_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_10,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(3,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.005665125);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.003060115);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.003551429);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.006627862);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01243115);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.01522421);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.008651148);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.01122961);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.003812011);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.002842044);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.00283147);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.005662941);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(21,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(22,0.004830859);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.006127922);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.00283147);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(25,0.002662043);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.003682377);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(36,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.06371167);
   VbbHcc_tags_H_mass_stack_11->SetBinError(3,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.00400587);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.003060115);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.003551429);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.00474377);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.006328473);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.007148034);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.004999565);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.005722219);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.003812011);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.002842044);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.00283147);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.004004304);
   VbbHcc_tags_H_mass_stack_11->SetBinError(21,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinError(22,0.003466234);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.004387592);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.00283147);
   VbbHcc_tags_H_mass_stack_11->SetBinError(25,0.002662043);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.003682377);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinError(36,0.002885672);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.002811088);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.01337053);
   VbbHcc_tags_H_mass_stack_11->SetEntries(64);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_11,"");
   
   TH1D *VbbHcc_tags_H_mass_stack_12 = new TH1D("VbbHcc_tags_H_mass_stack_12","",40,0,400);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(3,0.0004352311);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(5,0.0003228833);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.0003219266);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.002544452);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.001322946);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.002066583);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.003422248);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.003130048);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.009976037);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.008001608);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.009456407);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.003815673);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.002389157);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.002125858);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.0003228833);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.001998439);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(20,0.002675488);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(21,0.001399108);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.001786383);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.000936757);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.0006790568);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.001367408);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(26,0.0004143471);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0009762098);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(28,0.001211348);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(29,0.0008561963);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0006460157);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.001707134);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.0006708832);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0007877851);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(34,0.0009278738);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(35,0.001298119);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.0003262476);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0003895316);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.0008174164);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0006427865);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.000320559);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.02734223);
   VbbHcc_tags_H_mass_stack_12->SetBinError(3,0.0004352311);
   VbbHcc_tags_H_mass_stack_12->SetBinError(5,0.0003228833);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.0003219266);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0009921488);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.0006737035);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0007876161);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.001054382);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.001092881);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.001919549);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.001694955);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.001883442);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.001173381);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0009213024);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.0008732296);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0003228833);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0008495021);
   VbbHcc_tags_H_mass_stack_12->SetBinError(20,0.0009508689);
   VbbHcc_tags_H_mass_stack_12->SetBinError(21,0.0007065877);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.0008048163);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.0005441473);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0004810685);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.000697764);
   VbbHcc_tags_H_mass_stack_12->SetBinError(26,0.000294464);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0005637135);
   VbbHcc_tags_H_mass_stack_12->SetBinError(28,0.0006090814);
   VbbHcc_tags_H_mass_stack_12->SetBinError(29,0.0005256622);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0004568046);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.000776412);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.0004747709);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0004651623);
   VbbHcc_tags_H_mass_stack_12->SetBinError(34,0.0005384937);
   VbbHcc_tags_H_mass_stack_12->SetBinError(35,0.0006661966);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0003262476);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0003895316);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.0004836316);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0004545347);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.000320559);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.003073276);
   VbbHcc_tags_H_mass_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_mass_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_mass_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_mass__18 = new TH1D("VbbHcc_tags_H_mass__18","",40,0,400);
   VbbHcc_tags_H_mass__18->SetBinContent(3,123);
   VbbHcc_tags_H_mass__18->SetBinContent(4,1815);
   VbbHcc_tags_H_mass__18->SetBinContent(5,4734);
   VbbHcc_tags_H_mass__18->SetBinContent(6,7168);
   VbbHcc_tags_H_mass__18->SetBinContent(7,8100);
   VbbHcc_tags_H_mass__18->SetBinContent(15,6244);
   VbbHcc_tags_H_mass__18->SetBinContent(16,6214);
   VbbHcc_tags_H_mass__18->SetBinContent(17,5793);
   VbbHcc_tags_H_mass__18->SetBinContent(18,5778);
   VbbHcc_tags_H_mass__18->SetBinContent(19,5456);
   VbbHcc_tags_H_mass__18->SetBinContent(20,5111);
   VbbHcc_tags_H_mass__18->SetBinContent(21,4994);
   VbbHcc_tags_H_mass__18->SetBinContent(22,4800);
   VbbHcc_tags_H_mass__18->SetBinContent(23,4809);
   VbbHcc_tags_H_mass__18->SetBinContent(24,4452);
   VbbHcc_tags_H_mass__18->SetBinContent(25,4298);
   VbbHcc_tags_H_mass__18->SetBinContent(26,4356);
   VbbHcc_tags_H_mass__18->SetBinContent(27,4079);
   VbbHcc_tags_H_mass__18->SetBinContent(28,4066);
   VbbHcc_tags_H_mass__18->SetBinContent(29,4014);
   VbbHcc_tags_H_mass__18->SetBinContent(30,3851);
   VbbHcc_tags_H_mass__18->SetBinContent(31,3737);
   VbbHcc_tags_H_mass__18->SetBinContent(32,3745);
   VbbHcc_tags_H_mass__18->SetBinContent(33,3682);
   VbbHcc_tags_H_mass__18->SetBinContent(34,3630);
   VbbHcc_tags_H_mass__18->SetBinContent(35,3547);
   VbbHcc_tags_H_mass__18->SetBinContent(36,3436);
   VbbHcc_tags_H_mass__18->SetBinContent(37,3335);
   VbbHcc_tags_H_mass__18->SetBinContent(38,3300);
   VbbHcc_tags_H_mass__18->SetBinContent(39,3342);
   VbbHcc_tags_H_mass__18->SetBinContent(40,3129);
   VbbHcc_tags_H_mass__18->SetBinContent(41,127471);
   VbbHcc_tags_H_mass__18->SetEntries(313684);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__18->SetLineColor(ci);
   VbbHcc_tags_H_mass__18->SetLineWidth(2);
   VbbHcc_tags_H_mass__18->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__18->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__18->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__18->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__18->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__18->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1013[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1013[40] = {
   0,
   0.2906031,
   112.5466,
   2343.33,
   5513.167,
   8408.061,
   8919.485,
   7716.338,
   5549.328,
   6479.394,
   6216.75,
   6107.683,
   4371.161,
   6982.788,
   5477.593,
   5426.726,
   6976.425,
   5441.921,
   2744.786,
   4300.244,
   6040.146,
   3226.92,
   4656.173,
   4836.764,
   4325.032,
   3173.097,
   3294.044,
   3885.506,
   3220.217,
   2285.03,
   4501.353,
   3396.237,
   2563.925,
   2052.01,
   5605.408,
   1658.076,
   4180.5,
   2377.254,
   2364.659,
   3972.772};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1013[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1013[40] = {
   0,
   0.1495341,
   57.35394,
   854.9027,
   1228.544,
   1651.562,
   1494.265,
   1117.558,
   870.3751,
   1171.832,
   1120.792,
   1137.909,
   621.6558,
   1520.314,
   1131.346,
   1128.037,
   1256.001,
   1202.008,
   481.1652,
   876.4944,
   1323.904,
   685.4797,
   986.1541,
   928.2504,
   1103.569,
   729.216,
   926.7401,
   967.973,
   884.048,
   405.5834,
   1074.097,
   825.7301,
   619.7266,
   550.5463,
   2090.327,
   270.3425,
   961.9091,
   597.7025,
   662.2533,
   1481.689};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1013,Graph_from_VbbHcc_tags_H_mass_fy1013,Graph_from_VbbHcc_tags_H_mass_fex1013,Graph_from_VbbHcc_tags_H_mass_fey1013);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1013 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1013","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetMinimum(11.45513);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetMaximum(11455.13);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1013->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1013);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_mass_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_mass","MC unc. (stat.)","fl");

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
   H_mass_tags_18->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-45.96762,-0.2774193,315.7258,1.658065);
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
   
   TH1D *data_mc_ratio__19 = new TH1D("data_mc_ratio__19","",40,0,400);
   data_mc_ratio__19->SetBinContent(3,1.092881);
   data_mc_ratio__19->SetBinContent(4,0.7745389);
   data_mc_ratio__19->SetBinContent(5,0.8586716);
   data_mc_ratio__19->SetBinContent(6,0.8525152);
   data_mc_ratio__19->SetBinContent(7,0.9081242);
   data_mc_ratio__19->SetBinContent(8,1.052053);
   data_mc_ratio__19->SetBinContent(9,1.436931);
   data_mc_ratio__19->SetBinContent(10,1.150262);
   data_mc_ratio__19->SetBinContent(11,1.176821);
   data_mc_ratio__19->SetBinContent(12,1.146425);
   data_mc_ratio__19->SetBinContent(13,1.529799);
   data_mc_ratio__19->SetBinContent(14,0.9288553);
   data_mc_ratio__19->SetBinContent(15,1.139917);
   data_mc_ratio__19->SetBinContent(16,1.145073);
   data_mc_ratio__19->SetBinContent(17,0.8303679);
   data_mc_ratio__19->SetBinContent(18,1.061757);
   data_mc_ratio__19->SetBinContent(19,1.987769);
   data_mc_ratio__19->SetBinContent(20,1.188537);
   data_mc_ratio__19->SetBinContent(21,0.8268013);
   data_mc_ratio__19->SetBinContent(22,1.487487);
   data_mc_ratio__19->SetBinContent(23,1.032822);
   data_mc_ratio__19->SetBinContent(24,0.9204502);
   data_mc_ratio__19->SetBinContent(25,0.99375);
   data_mc_ratio__19->SetBinContent(26,1.372791);
   data_mc_ratio__19->SetBinContent(27,1.238295);
   data_mc_ratio__19->SetBinContent(28,1.046453);
   data_mc_ratio__19->SetBinContent(29,1.2465);
   data_mc_ratio__19->SetBinContent(30,1.685317);
   data_mc_ratio__19->SetBinContent(31,0.8301949);
   data_mc_ratio__19->SetBinContent(32,1.102691);
   data_mc_ratio__19->SetBinContent(33,1.436079);
   data_mc_ratio__19->SetBinContent(34,1.768998);
   data_mc_ratio__19->SetBinContent(35,0.6327818);
   data_mc_ratio__19->SetBinContent(36,2.072281);
   data_mc_ratio__19->SetBinContent(37,0.7977515);
   data_mc_ratio__19->SetBinContent(38,1.388156);
   data_mc_ratio__19->SetBinContent(39,1.413312);
   data_mc_ratio__19->SetBinContent(40,0.7876112);
   data_mc_ratio__19->SetBinContent(41,1.232403);
   data_mc_ratio__19->SetBinError(3,0.09854175);
   data_mc_ratio__19->SetBinError(4,0.01818046);
   data_mc_ratio__19->SetBinError(5,0.01247995);
   data_mc_ratio__19->SetBinError(6,0.01006939);
   data_mc_ratio__19->SetBinError(7,0.01009027);
   data_mc_ratio__19->SetBinError(8,0.01167652);
   data_mc_ratio__19->SetBinError(9,0.01609154);
   data_mc_ratio__19->SetBinError(10,0.01332389);
   data_mc_ratio__19->SetBinError(11,0.01375857);
   data_mc_ratio__19->SetBinError(12,0.01370044);
   data_mc_ratio__19->SetBinError(13,0.01870763);
   data_mc_ratio__19->SetBinError(14,0.01153346);
   data_mc_ratio__19->SetBinError(15,0.01442586);
   data_mc_ratio__19->SetBinError(16,0.01452606);
   data_mc_ratio__19->SetBinError(17,0.01090985);
   data_mc_ratio__19->SetBinError(18,0.01396808);
   data_mc_ratio__19->SetBinError(19,0.02691093);
   data_mc_ratio__19->SetBinError(20,0.01662493);
   data_mc_ratio__19->SetBinError(21,0.01169976);
   data_mc_ratio__19->SetBinError(22,0.02147002);
   data_mc_ratio__19->SetBinError(23,0.01489355);
   data_mc_ratio__19->SetBinError(24,0.01379503);
   data_mc_ratio__19->SetBinError(25,0.01515807);
   data_mc_ratio__19->SetBinError(26,0.02079987);
   data_mc_ratio__19->SetBinError(27,0.01938864);
   data_mc_ratio__19->SetBinError(28,0.01641104);
   data_mc_ratio__19->SetBinError(29,0.01967449);
   data_mc_ratio__19->SetBinError(30,0.02715782);
   data_mc_ratio__19->SetBinError(31,0.01358059);
   data_mc_ratio__19->SetBinError(32,0.01801889);
   data_mc_ratio__19->SetBinError(33,0.02366664);
   data_mc_ratio__19->SetBinError(34,0.02936121);
   data_mc_ratio__19->SetBinError(35,0.01062486);
   data_mc_ratio__19->SetBinError(36,0.03535267);
   data_mc_ratio__19->SetBinError(37,0.01381401);
   data_mc_ratio__19->SetBinError(38,0.0241647);
   data_mc_ratio__19->SetBinError(39,0.02444752);
   data_mc_ratio__19->SetBinError(40,0.01408021);
   data_mc_ratio__19->SetBinError(41,0.05633962);
   data_mc_ratio__19->SetMinimum(0.4);
   data_mc_ratio__19->SetMaximum(1.6);
   data_mc_ratio__19->SetEntries(663.7961);
   data_mc_ratio__19->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__19->SetLineColor(ci);
   data_mc_ratio__19->SetLineWidth(2);
   data_mc_ratio__19->SetMarkerStyle(20);
   data_mc_ratio__19->SetMarkerSize(1.2);
   data_mc_ratio__19->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__19->GetXaxis()->SetRange(1,30);
   data_mc_ratio__19->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__19->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__19->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__19->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__19->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__19->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__19->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__19->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__19->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__19->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__19->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__19->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__19->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__19->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__19->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__19->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__19->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1014[40] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255,
   265,
   275,
   285,
   295,
   305,
   315,
   325,
   335,
   345,
   355,
   365,
   375,
   385,
   395};
   Double_t Graph_from_mc_statistical_error_fy1014[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1014[40] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t Graph_from_mc_statistical_error_fey1014[40] = {
   0,
   0.5145648,
   0.5096018,
   0.3648239,
   0.2228381,
   0.196426,
   0.1675282,
   0.1448302,
   0.1568433,
   0.1808553,
   0.1802859,
   0.1863078,
   0.1422175,
   0.2177231,
   0.2065407,
   0.207867,
   0.180035,
   0.2208793,
   0.1753015,
   0.2038244,
   0.219184,
   0.2124254,
   0.211795,
   0.1919156,
   0.2551587,
   0.2298121,
   0.2813381,
   0.2491241,
   0.2745305,
   0.1774959,
   0.2386165,
   0.2431309,
   0.2417101,
   0.2682961,
   0.3729125,
   0.1630459,
   0.2300943,
   0.2514256,
   0.2800629,
   0.3729609};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1014,Graph_from_mc_statistical_error_fy1014,Graph_from_mc_statistical_error_fex1014,Graph_from_mc_statistical_error_fey1014);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1014 = new TH1F("Graph_Graph_from_mc_statistical_error1014","",100,0,440);
   Graph_Graph_from_mc_statistical_error1014->SetMinimum(0.3825222);
   Graph_Graph_from_mc_statistical_error1014->SetMaximum(1.617478);
   Graph_Graph_from_mc_statistical_error1014->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1014->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1014->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1014);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}
