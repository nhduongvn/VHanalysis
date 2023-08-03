void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Thu Aug  3 10:21:53 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(0,0,1,1);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetFillStyle(4000);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-85.79966,6.314516,85723.85);
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
   st->SetMaximum(73469.42);
   
   TH1F *st_stack_245 = new TH1F("st_stack_245","",30,0,6);
   st_stack_245->SetMinimum(0.01);
   st_stack_245->SetMaximum(77142.89);
   st_stack_245->SetDirectory(0);
   st_stack_245->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_245->SetLineColor(ci);
   st_stack_245->GetXaxis()->SetRange(1,30);
   st_stack_245->GetXaxis()->SetLabelFont(42);
   st_stack_245->GetXaxis()->SetLabelSize(0.035);
   st_stack_245->GetXaxis()->SetTitleSize(0.035);
   st_stack_245->GetXaxis()->SetTitleFont(42);
   st_stack_245->GetYaxis()->SetTitle("Events/0.2");
   st_stack_245->GetYaxis()->SetLabelFont(42);
   st_stack_245->GetYaxis()->SetLabelSize(0.05);
   st_stack_245->GetYaxis()->SetTitleSize(0.057);
   st_stack_245->GetYaxis()->SetTitleOffset(1.2);
   st_stack_245->GetYaxis()->SetTitleFont(42);
   st_stack_245->GetZaxis()->SetLabelFont(42);
   st_stack_245->GetZaxis()->SetLabelSize(0.035);
   st_stack_245->GetZaxis()->SetTitleSize(0.035);
   st_stack_245->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_245);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(1,6205.669);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(2,30915.59);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(3,26818.3);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(4,17228.74);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(5,11719.73);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(6,13374.65);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(7,11731.53);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(8,7055.502);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(9,5461.863);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(10,5779.331);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(11,7070.594);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(12,7408.239);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(13,4006.736);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(14,3093.785);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(15,3300.09);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(16,2628.118);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(17,2197.691);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(18,1534.336);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(19,790.6432);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(20,2623.86);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(21,1856.486);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(22,1167.965);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(23,644.1087);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(24,591.6007);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(25,486.7156);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(26,429.2586);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(27,91.24356);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(28,21.86037);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(29,20.65326);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(30,14.41913);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinContent(31,49.31506);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(1,835.635);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(2,2934.517);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(3,3097.027);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(4,2139.803);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(5,1372.97);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(6,2440.994);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(7,2351.297);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(8,1668.46);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(9,912.9178);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(10,1641.371);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(11,1747.345);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(12,1787.834);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(13,1524.778);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(14,676.35);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(15,771.062);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(16,718.6379);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(17,555.3779);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(18,543.6047);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(19,111.411);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(20,1472.488);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(21,608.2612);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(22,471.5571);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(23,279.2044);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(24,278.777);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(25,275.6768);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(26,273.123);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(27,34.78678);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(28,9.761346);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(29,9.204511);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(30,7.74909);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetBinError(31,31.6086);
   VbbHcc_both_Z_dR_Bj1_stack_1->SetEntries(10203);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(1,28.52172);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(2,98.47382);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(3,108.7841);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(4,92.86014);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(5,69.63093);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(6,58.02191);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(7,49.59933);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(8,44.03606);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(9,35.00871);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(10,29.71708);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(11,27.97408);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(12,23.22409);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(13,19.94495);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(14,17.01766);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(15,16.51378);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(16,14.21377);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(17,12.69492);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(18,8.62626);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(19,8.279038);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(20,5.937421);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(21,5.72264);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(22,5.872108);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(23,2.406753);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(24,2.864417);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(25,3.103778);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(26,1.683941);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(27,0.6035013);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(28,0.3848311);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinContent(31,0.3523464);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(1,2.250633);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(2,3.970333);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(3,4.10554);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(4,3.757415);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(5,3.169496);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(6,2.956928);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(7,2.74503);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(8,2.683868);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(9,2.395722);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(10,2.189147);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(11,2.157053);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(12,1.91443);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(13,1.692212);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(14,1.63228);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(15,1.628706);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(16,1.558178);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(17,1.370336);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(18,1.128406);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(19,1.099082);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(20,0.926626);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(21,1.014583);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(22,1.044039);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(23,0.4760942);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(24,0.6993985);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(25,0.7863946);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(26,0.5629387);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(27,0.1678299);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(28,0.1363947);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetBinError(31,0.2720034);
   VbbHcc_both_Z_dR_Bj1_stack_2->SetEntries(10096);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_3 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(1,373.7572);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(2,1678.283);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(3,2120.056);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(4,1919.406);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(5,1527.551);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(6,1201.005);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(7,924.1366);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(8,753.6037);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(9,621.7105);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(10,534.0924);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(11,457.2645);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(12,412.7291);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(13,360.1872);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(14,320.0157);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(15,282.9041);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(16,249.6042);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(17,215.7695);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(18,184.2085);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(19,157.1302);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(20,131.7941);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(21,105.5331);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(22,85.57171);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(23,65.7108);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(24,49.72218);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(25,36.2088);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(26,26.4138);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(27,17.29764);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(28,9.591921);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(29,6.103053);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(30,2.90544);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinContent(31,5.136949);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(1,4.857991);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(2,10.26672);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(3,11.56926);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(4,11.0108);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(5,9.824299);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(6,8.697403);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(7,7.633481);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(8,6.86769);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(9,6.252689);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(10,5.791949);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(11,5.36392);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(12,5.107187);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(13,4.768299);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(14,4.489424);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(15,4.235044);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(16,3.965821);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(17,3.686993);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(18,3.40755);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(19,3.146446);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(20,2.878827);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(21,2.567956);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(22,2.318139);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(23,2.02718);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(24,1.761304);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(25,1.505764);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(26,1.291131);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(27,1.035649);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(28,0.7694711);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(29,0.6094246);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(30,0.4267725);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetBinError(31,0.5619974);
   VbbHcc_both_Z_dR_Bj1_stack_3->SetEntries(243289);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_4 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(1,85.2481);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(2,306.745);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(3,347.5633);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(4,264.6254);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(5,176.684);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(6,133.6823);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(7,97.22808);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(8,92.05462);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(9,93.20695);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(10,67.56562);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(11,57.62992);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(12,52.41527);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(13,39.21705);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(14,39.82054);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(15,36.52763);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(16,23.84863);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(17,28.92011);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(18,21.73001);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(19,17.72693);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(20,19.76137);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(21,10.93543);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(22,12.32017);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(23,8.721802);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(24,4.68286);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(25,8.055069);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(26,4.172904);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(27,2.58881);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(28,2.015747);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(29,0.7689973);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(30,0.3563303);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinContent(31,0.3446026);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(1,3.985452);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(2,11.60287);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(3,14.45493);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(4,14.68426);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(5,11.23686);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(6,9.539681);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(7,7.142149);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(8,7.56063);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(9,10.17055);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(10,7.225108);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(11,6.074721);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(12,6.010684);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(13,3.679252);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(14,5.202086);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(15,5.105302);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(16,1.982737);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(17,4.993484);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(18,3.236967);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(19,3.137551);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(20,4.849757);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(21,1.289961);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(22,2.977755);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(23,1.198326);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(24,0.7917158);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(25,2.814916);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(26,0.8404734);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(27,0.602371);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(28,0.5077713);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(29,0.33549);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(30,0.1598728);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetBinError(31,0.1544676);
   VbbHcc_both_Z_dR_Bj1_stack_4->SetEntries(15464);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_5 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(1,16.46175);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(2,45.33434);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(3,31.57391);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(4,15.43072);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(5,14.39018);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(6,14.41994);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(7,8.142354);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(8,8.508738);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(9,4.80463);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(10,5.298425);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(11,11.60108);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(12,3.762715);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(13,4.48994);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(14,2.417908);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(15,1.612442);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(16,2.310819);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(17,1.978707);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(18,2.396196);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(19,1.808414);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(20,1.025469);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(21,0.5714577);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(22,1.256281);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(23,0.877495);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(24,0.3714762);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(25,0.4084954);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(26,0.1241852);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(27,0.2421376);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(28,0.1771861);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinContent(29,0.1421551);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(1,1.31151);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(2,7.170319);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(3,3.341167);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(4,2.115744);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(5,2.338315);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(6,2.364983);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(7,1.915272);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(8,1.996254);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(9,1.207059);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(10,1.6016);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(11,6.204966);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(12,1.161796);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(13,1.225105);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(14,0.5855879);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(15,0.3700282);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(16,0.6273809);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(17,0.4441079);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(18,1.084368);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(19,0.4390815);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(20,0.3226025);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(21,0.2211635);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(22,0.4735003);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(23,0.2889583);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(24,0.1590767);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(25,0.1650807);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(26,0.08428628);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(27,0.163582);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(28,0.09576776);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetBinError(29,0.100368);
   VbbHcc_both_Z_dR_Bj1_stack_5->SetEntries(3789);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_6 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(3,0.2687386);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(4,0.2687386);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(5,0.2687386);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(6,0.2687386);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinContent(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(3,0.1900269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(4,0.1900269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(5,0.1900269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(6,0.1900269);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(17,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetBinError(21,0.1343693);
   VbbHcc_both_Z_dR_Bj1_stack_6->SetEntries(11);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,0.5452932);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,1.308704);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.7634105);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,0.8724691);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.3271759);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(10,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(11,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(16,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.2438625);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,0.3777902);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.288542);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.3084644);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.1888951);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(10,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(11,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(15,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(16,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(24,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,1.459243);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,6.323386);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,8.755457);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,4.864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,5.10735);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,2.675279);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,2.675279);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,1.945657);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,1.459243);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,0.7296215);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,1.459243);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,1.216036);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,0.9728286);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(16,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,0.7296215);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(24,0.4864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(25,0.4864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.5957334);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.240118);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.459243);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.087655);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.114515);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.8066269);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.8066269);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.6878937);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.5957334);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.4212471);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.5957334);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.5438277);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.3439469);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.4864143);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(16,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.4212471);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.2432072);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(24,0.3439469);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(25,0.3439469);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(175);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_9 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(1,1.402804);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(2,6.41635);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(3,7.236599);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(4,5.387261);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(5,3.491209);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(6,2.44838);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(7,1.931775);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(8,1.442648);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(9,1.281896);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(10,1.286018);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(11,1.134883);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(12,1.066186);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(13,0.9631395);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(14,0.8710848);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(15,0.7597948);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(16,0.5701896);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(17,0.4492819);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(18,0.3489835);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(19,0.2624246);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(20,0.2005968);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(21,0.2088405);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(22,0.1731178);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(23,0.1442648);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(24,0.07968915);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(25,0.0810631);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(26,0.04946223);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(27,0.03434877);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(28,0.01511346);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(29,0.006869754);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinContent(31,0.002747902);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(1,0.04390197);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(2,0.09389222);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(3,0.09971324);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(4,0.0860339);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(5,0.06925857);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(6,0.0579996);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(7,0.05151857);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(8,0.04452109);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(9,0.04196739);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(10,0.04203481);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(11,0.03948764);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(12,0.03827384);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(13,0.03637728);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(14,0.0345952);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(15,0.03230976);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(16,0.02798951);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(17,0.02484535);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(18,0.02189717);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(19,0.01898838);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(20,0.01660151);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(21,0.0169392);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(22,0.01542256);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(23,0.01407881);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(24,0.0104637);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(25,0.01055352);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(26,0.008243705);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(27,0.006869754);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(28,0.004556879);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(29,0.003072247);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetBinError(31,0.00194306);
   VbbHcc_both_Z_dR_Bj1_stack_9->SetEntries(28929);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_10 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(1,0.5929245);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(2,2.725806);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(3,3.299754);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(4,2.544634);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(5,1.710029);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(6,1.186207);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(7,0.8578787);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(8,0.6921033);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(9,0.5947148);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(10,0.5127222);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(11,0.4933877);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(12,0.441829);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(13,0.3841836);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(14,0.356614);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(15,0.2935979);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(16,0.2305818);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(17,0.2112473);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(18,0.1596886);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(19,0.1496633);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(20,0.124242);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(21,0.1045495);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(22,0.08449891);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(23,0.0712512);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(24,0.05907762);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(25,0.03580462);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(26,0.03401439);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(27,0.01432185);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(28,0.005012647);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(29,0.00286437);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(30,0.0003580462);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinContent(31,0.0003580462);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(1,0.01457033);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(2,0.03124043);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(3,0.03437244);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(4,0.03018438);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(5,0.02474408);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(6,0.02060866);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(7,0.01752599);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(8,0.01574182);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(9,0.0145923);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(10,0.0135491);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(11,0.01329118);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(12,0.01257757);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(13,0.0117284);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(14,0.01129975);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(15,0.01025288);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(16,0.009086194);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(17,0.008696912);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(18,0.007561475);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(19,0.007320272);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(20,0.006669662);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(21,0.006118296);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(22,0.00550041);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(23,0.005050863);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(24,0.004599187);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(25,0.003580462);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(26,0.003489803);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(27,0.002264483);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(28,0.001339686);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(29,0.001012708);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(30,0.0003580462);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetBinError(31,0.0003580462);
   VbbHcc_both_Z_dR_Bj1_stack_10->SetEntries(50200);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.02461507);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.01641004);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.006115663);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.006699373);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(36);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(1,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(2,0.01071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(3,0.007859849);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(4,0.007859849);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(5,0.003929924);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(6,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(7,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(8,0.001071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(9,0.002858127);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(10,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(11,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(12,0.001071798);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(13,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(14,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(15,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(16,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(17,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(19,0.001429063);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(23,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinContent(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(1,0.0010105);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(2,0.001956826);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(3,0.001675725);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(4,0.001675725);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(5,0.001184917);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(6,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(7,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(8,0.0006188026);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(9,0.0010105);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(10,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(11,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(12,0.0006188026);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(13,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(14,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(15,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(16,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(17,0.0005052502);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(19,0.0007145317);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(23,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(27,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetBinError(29,0.0003572658);
   VbbHcc_both_Z_dR_Bj1_stack_12->SetEntries(137);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_Z_dR_Bj1__489 = new TH1D("VbbHcc_both_Z_dR_Bj1__489","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(1,5121);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(2,16509);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(3,15168);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(4,11213);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(5,9057);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(6,6803);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(7,5447);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(8,4575);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(9,3791);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(10,3293);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(11,2884);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(12,2607);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(13,2276);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(14,2048);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(15,1909);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(16,1689);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(17,1372);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(18,1203);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(19,983);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(20,887);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(21,763);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(22,573);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(23,507);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(24,399);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(25,311);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(26,224);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(27,165);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(28,116);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(29,59);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(30,30);
   VbbHcc_both_Z_dR_Bj1__489->SetBinContent(31,36);
   VbbHcc_both_Z_dR_Bj1__489->SetEntries(102047);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj1__489->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj1__489->SetLineWidth(2);
   VbbHcc_both_Z_dR_Bj1__489->SetMarkerStyle(20);
   VbbHcc_both_Z_dR_Bj1__489->SetMarkerSize(1.2);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1__489->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__489->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1__489->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__489->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fx1489[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fy1489[30] = {
   6713.669,
   33061.24,
   29446.08,
   19534.91,
   13519.44,
   14788.47,
   12816.46,
   7958.114,
   6220.151,
   6418.751,
   7626.802,
   7903.447,
   4433.139,
   3474.884,
   3639.896,
   2919.249,
   2458.579,
   1751.808,
   976.3536,
   2782.703,
   1979.94,
   1273.243,
   722.0414,
   649.9786,
   535.0978,
   461.7397,
   112.0247,
   34.05018,
   27.67756,
   17.68126};
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fex1489[30] = {
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
   Double_t Graph_from_VbbHcc_both_Z_dR_Bj1_fey1489[30] = {
   835.663,
   2934.569,
   3097.087,
   2139.886,
   1373.057,
   2441.032,
   2351.323,
   1668.495,
   913.0001,
   1641.399,
   1747.376,
   1787.853,
   1524.791,
   676.3873,
   771.0925,
   718.6536,
   555.4146,
   543.6272,
   111.5062,
   1472.499,
   608.2689,
   471.5736,
   279.2149,
   278.7849,
   275.6966,
   273.128,
   34.80819,
   9.806201,
   9.231308,
   7.76248};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_Z_dR_Bj1_fx1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fy1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fex1489,Graph_from_VbbHcc_both_Z_dR_Bj1_fey1489);
   gre->SetName("Graph_from_VbbHcc_both_Z_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489 = new TH1F("Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetMinimum(8.926901);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetMaximum(39594.4);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_Z_dR_Bj11489);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1","Data (JetHT, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_Z_dR_Bj1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_dR_Bj1_both_16->cd();
  
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
   
   TH1D *data_mc_ratio__490 = new TH1D("data_mc_ratio__490","",30,0,6);
   data_mc_ratio__490->SetBinContent(1,0.7627722);
   data_mc_ratio__490->SetBinContent(2,0.4993461);
   data_mc_ratio__490->SetBinContent(3,0.515111);
   data_mc_ratio__490->SetBinContent(4,0.573998);
   data_mc_ratio__490->SetBinContent(5,0.669924);
   data_mc_ratio__490->SetBinContent(6,0.4600204);
   data_mc_ratio__490->SetBinContent(7,0.4250005);
   data_mc_ratio__490->SetBinContent(8,0.574885);
   data_mc_ratio__490->SetBinContent(9,0.6094708);
   data_mc_ratio__490->SetBinContent(10,0.5130281);
   data_mc_ratio__490->SetBinContent(11,0.3781401);
   data_mc_ratio__490->SetBinContent(12,0.3298561);
   data_mc_ratio__490->SetBinContent(13,0.513406);
   data_mc_ratio__490->SetBinContent(14,0.5893722);
   data_mc_ratio__490->SetBinContent(15,0.5244655);
   data_mc_ratio__490->SetBinContent(16,0.5785735);
   data_mc_ratio__490->SetBinContent(17,0.5580459);
   data_mc_ratio__490->SetBinContent(18,0.6867189);
   data_mc_ratio__490->SetBinContent(19,1.006807);
   data_mc_ratio__490->SetBinContent(20,0.3187548);
   data_mc_ratio__490->SetBinContent(21,0.3853653);
   data_mc_ratio__490->SetBinContent(22,0.4500319);
   data_mc_ratio__490->SetBinContent(23,0.7021758);
   data_mc_ratio__490->SetBinContent(24,0.6138663);
   data_mc_ratio__490->SetBinContent(25,0.5812022);
   data_mc_ratio__490->SetBinContent(26,0.4851219);
   data_mc_ratio__490->SetBinContent(27,1.47289);
   data_mc_ratio__490->SetBinContent(28,3.406737);
   data_mc_ratio__490->SetBinContent(29,2.131691);
   data_mc_ratio__490->SetBinContent(30,1.696712);
   data_mc_ratio__490->SetBinContent(31,0.6527407);
   data_mc_ratio__490->SetBinError(1,0.01065902);
   data_mc_ratio__490->SetBinError(2,0.003886344);
   data_mc_ratio__490->SetBinError(3,0.004182507);
   data_mc_ratio__490->SetBinError(4,0.005420626);
   data_mc_ratio__490->SetBinError(5,0.007039362);
   data_mc_ratio__490->SetBinError(6,0.005577336);
   data_mc_ratio__490->SetBinError(7,0.005758518);
   data_mc_ratio__490->SetBinError(8,0.008499344);
   data_mc_ratio__490->SetBinError(9,0.009898651);
   data_mc_ratio__490->SetBinError(10,0.00894016);
   data_mc_ratio__490->SetBinError(11,0.007041337);
   data_mc_ratio__490->SetBinError(12,0.006460319);
   data_mc_ratio__490->SetBinError(13,0.01076155);
   data_mc_ratio__490->SetBinError(14,0.01302341);
   data_mc_ratio__490->SetBinError(15,0.01200367);
   data_mc_ratio__490->SetBinError(16,0.01407809);
   data_mc_ratio__490->SetBinError(17,0.01506582);
   data_mc_ratio__490->SetBinError(18,0.01979913);
   data_mc_ratio__490->SetBinError(19,0.03211217);
   data_mc_ratio__490->SetBinError(20,0.01070274);
   data_mc_ratio__490->SetBinError(21,0.01395116);
   data_mc_ratio__490->SetBinError(22,0.01880035);
   data_mc_ratio__490->SetBinError(23,0.03118472);
   data_mc_ratio__490->SetBinError(24,0.03073176);
   data_mc_ratio__490->SetBinError(25,0.03295695);
   data_mc_ratio__490->SetBinError(26,0.03241357);
   data_mc_ratio__490->SetBinError(27,0.1146643);
   data_mc_ratio__490->SetBinError(28,0.3163076);
   data_mc_ratio__490->SetBinError(29,0.2775225);
   data_mc_ratio__490->SetBinError(30,0.3097758);
   data_mc_ratio__490->SetBinError(31,0.3896688);
   data_mc_ratio__490->SetMinimum(0.4);
   data_mc_ratio__490->SetMaximum(1.6);
   data_mc_ratio__490->SetEntries(168.1236);
   data_mc_ratio__490->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__490->SetLineColor(ci);
   data_mc_ratio__490->SetLineWidth(2);
   data_mc_ratio__490->SetMarkerStyle(20);
   data_mc_ratio__490->SetMarkerSize(1.2);
   data_mc_ratio__490->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   data_mc_ratio__490->GetXaxis()->SetRange(1,30);
   data_mc_ratio__490->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__490->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__490->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__490->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__490->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__490->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__490->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__490->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__490->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__490->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__490->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__490->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__490->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__490->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1490[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1490[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1490[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1490[30] = {
   0.1244719,
   0.08876162,
   0.1051782,
   0.1095416,
   0.1015617,
   0.1650631,
   0.1834613,
   0.2096596,
   0.146781,
   0.2557194,
   0.2291099,
   0.2262118,
   0.3439529,
   0.1946503,
   0.2118447,
   0.2461776,
   0.2259088,
   0.3103234,
   0.1142068,
   0.5291615,
   0.3072159,
   0.370372,
   0.3867021,
   0.4289139,
   0.5152266,
   0.5915194,
   0.310719,
   0.2879926,
   0.3335305,
   0.439023};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1490,Graph_from_mc_statistical_error_fy1490,Graph_from_mc_statistical_error_fex1490,Graph_from_mc_statistical_error_fey1490);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1490 = new TH1F("Graph_Graph_from_mc_statistical_error1490","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1490->SetMinimum(0.2901767);
   Graph_Graph_from_mc_statistical_error1490->SetMaximum(1.709823);
   Graph_Graph_from_mc_statistical_error1490->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1490->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1490->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1490);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
