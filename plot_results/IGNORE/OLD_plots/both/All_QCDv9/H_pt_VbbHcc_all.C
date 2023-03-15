void H_pt_VbbHcc_all()
{
//=========Macro generated from canvas: H_pt_VbbHcc_all/H_pt_VbbHcc_all
//=========  (Tue Nov 22 09:17:13 2022) by ROOT version 6.14/09
   TCanvas *H_pt_VbbHcc_all = new TCanvas("H_pt_VbbHcc_all", "H_pt_VbbHcc_all",0,0,600,600);
   H_pt_VbbHcc_all->SetHighLightColor(2);
   H_pt_VbbHcc_all->Range(0,0,1,1);
   H_pt_VbbHcc_all->SetFillColor(0);
   H_pt_VbbHcc_all->SetFillStyle(4000);
   H_pt_VbbHcc_all->SetBorderMode(0);
   H_pt_VbbHcc_all->SetBorderSize(2);
   H_pt_VbbHcc_all->SetFrameFillStyle(1000);
   H_pt_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(116.1295,-71962.73,1562.903,7.189106e+07);
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
   st->SetMaximum(6.161406e+07);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",40,0,2000);
   st_stack_16->SetMinimum(0.3);
   st_stack_16->SetMaximum(6.469476e+07);
   st_stack_16->SetDirectory(0);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->GetXaxis()->SetRange(7,30);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetLabelSize(0.035);
   st_stack_16->GetXaxis()->SetTitleSize(0.035);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/50.0");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetLabelSize(0.05);
   st_stack_16->GetYaxis()->SetTitleSize(0.057);
   st_stack_16->GetYaxis()->SetTitleOffset(1.2);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetLabelSize(0.035);
   st_stack_16->GetZaxis()->SetTitleSize(0.035);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VbbHcc_duong_H_pt_all_stack_1 = new TH1D("VbbHcc_duong_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_1->SetBinContent(1,1.540684e+07);
   VbbHcc_duong_H_pt_all_stack_1->SetBinContent(2,2.426538e+07);
   VbbHcc_duong_H_pt_all_stack_1->SetBinContent(3,8354246);
   VbbHcc_duong_H_pt_all_stack_1->SetBinContent(4,647968.1);
   VbbHcc_duong_H_pt_all_stack_1->SetBinContent(5,37476.33);
   VbbHcc_duong_H_pt_all_stack_1->SetBinContent(6,8001.26);
   VbbHcc_duong_H_pt_all_stack_1->SetBinContent(7,1044.857);
   VbbHcc_duong_H_pt_all_stack_1->SetBinError(1,143923.2);
   VbbHcc_duong_H_pt_all_stack_1->SetBinError(2,180591.6);
   VbbHcc_duong_H_pt_all_stack_1->SetBinError(3,105878.3);
   VbbHcc_duong_H_pt_all_stack_1->SetBinError(4,29540.31);
   VbbHcc_duong_H_pt_all_stack_1->SetBinError(5,7042.488);
   VbbHcc_duong_H_pt_all_stack_1->SetBinError(6,3140.616);
   VbbHcc_duong_H_pt_all_stack_1->SetBinError(7,1044.857);
   VbbHcc_duong_H_pt_all_stack_1->SetEntries(37535);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_2 = new TH1D("VbbHcc_duong_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(1,115575.7);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(2,206144.5);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(3,116339);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(4,48492.15);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(5,22257.37);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(6,11463.97);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(7,6329.804);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(8,3739.614);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(9,2257.138);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(10,1425.488);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(11,912.6355);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(12,614.1396);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(13,407.1722);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(14,273.5231);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(15,206.0219);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(16,124.9663);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(17,105.4295);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(18,79.25192);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(19,60.34958);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(20,34.25766);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(21,21.62236);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(22,21.82788);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(23,12.82095);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(24,10.59167);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(25,11.14226);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(26,11.89775);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(27,6.524591);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(28,4.868627);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(29,0.6943976);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(30,3.057847);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(31,0.1537469);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(32,0.8347006);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(33,0.08481878);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(34,0.9664135);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(35,0.345328);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(36,2.081534);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(39,0.06014031);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(40,0.3318568);
   VbbHcc_duong_H_pt_all_stack_2->SetBinContent(41,0.3906805);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(1,135.5107);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(2,181.1737);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(3,138.7797);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(4,92.14508);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(5,63.86677);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(6,47.00219);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(7,35.58055);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(8,27.90913);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(9,22.06243);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(10,17.83441);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(11,14.40877);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(12,11.96252);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(13,9.783419);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(14,8.06972);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(15,7.187);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(16,5.62615);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(17,5.188413);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(18,4.487691);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(19,3.971767);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(20,3.048109);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(21,2.303746);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(22,2.400725);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(23,1.929747);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(24,1.683538);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(25,1.739802);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(26,1.813616);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(27,1.345644);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(28,1.118332);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(29,0.3967764);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(30,0.8898531);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(31,0.08951649);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(32,0.4611421);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(33,0.05997593);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(34,0.4397075);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(35,0.2953582);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(36,0.784793);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(39,0.06014031);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(40,0.3318568);
   VbbHcc_duong_H_pt_all_stack_2->SetBinError(41,0.2555967);
   VbbHcc_duong_H_pt_all_stack_2->SetEntries(7739056);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_2,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_3 = new TH1D("VbbHcc_duong_H_pt_all_stack_3","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(1,1771803);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(2,3144690);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(3,1760430);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(4,652587.5);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(5,271445.1);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(6,129764.7);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(7,68146);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(8,38136.27);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(9,21898.26);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(10,13085.62);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(11,8266.488);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(12,5242.049);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(13,3440.701);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(14,2282.343);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(15,1558.286);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(16,1051.436);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(17,718.7333);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(18,503.7084);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(19,350.0253);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(20,251.9458);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(21,183.2321);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(22,126.4315);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(23,94.92876);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(24,66.16983);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(25,52.25544);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(26,37.38078);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(27,25.06602);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(28,23.40138);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(29,17.02783);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(30,11.35074);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(31,8.563602);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(32,5.492297);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(33,3.991283);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(34,2.948893);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(35,2.140354);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(36,1.798856);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(37,1.946445);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(38,2.212258);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(39,1.010628);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(40,0.720327);
   VbbHcc_duong_H_pt_all_stack_3->SetBinContent(41,2.284805);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(1,349.5908);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(2,465.4956);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(3,348.1476);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(4,210.9005);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(5,135.6732);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(6,93.79285);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(7,68.05894);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(8,51.0076);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(9,38.76023);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(10,29.9821);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(11,23.91577);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(12,19.07293);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(13,15.48401);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(14,12.64698);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(15,10.45183);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(16,8.605143);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(17,7.119546);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(18,5.965745);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(19,4.976231);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(20,4.223456);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(21,3.599572);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(22,2.994554);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(23,2.619578);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(24,2.168029);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(25,1.924558);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(26,1.620104);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(27,1.318035);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(28,1.2984);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(29,1.103225);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(30,0.9105301);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(31,0.7800389);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(32,0.6349598);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(33,0.5296513);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(34,0.470141);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(35,0.4042294);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(36,0.3538875);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(37,0.3773044);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(38,0.4058516);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(39,0.2519026);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(40,0.2337912);
   VbbHcc_duong_H_pt_all_stack_3->SetBinError(41,0.4031532);
   VbbHcc_duong_H_pt_all_stack_3->SetEntries(1.244387e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_H_pt_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_3->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_3->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_3,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_4 = new TH1D("VbbHcc_duong_H_pt_all_stack_4","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(1,17448.24);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(2,38179.56);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(3,37173.74);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(4,25592.81);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(5,11217.9);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(6,2524.895);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(7,221.0519);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(8,10.21422);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(9,3.607288);
   VbbHcc_duong_H_pt_all_stack_4->SetBinContent(11,0.5796614);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(1,76.62323);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(2,113.2102);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(3,111.9215);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(4,92.83064);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(5,61.58358);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(6,29.22614);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(7,8.625004);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(8,1.856653);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(9,1.048444);
   VbbHcc_duong_H_pt_all_stack_4->SetBinError(11,0.4098825);
   VbbHcc_duong_H_pt_all_stack_4->SetEntries(412356);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_H_pt_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_4->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_4->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_4,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_5 = new TH1D("VbbHcc_duong_H_pt_all_stack_5","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(1,9262.385);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(2,20690.73);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(3,21089.91);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(4,15530.24);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(5,7510.286);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(6,1867.705);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(7,207.0832);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(8,23.86189);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(9,2.165046);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(10,2.241167);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(11,3.757581);
   VbbHcc_duong_H_pt_all_stack_5->SetBinContent(16,2.141156);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(1,104.9431);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(2,157.2916);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(3,158.8315);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(4,136.174);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(5,94.80056);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(6,47.38854);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(7,15.88425);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(8,5.224272);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(9,1.530918);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(10,1.584745);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(11,2.181879);
   VbbHcc_duong_H_pt_all_stack_5->SetBinError(16,1.514026);
   VbbHcc_duong_H_pt_all_stack_5->SetEntries(66594);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_H_pt_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_5->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_5->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_5,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_6 = new TH1D("VbbHcc_duong_H_pt_all_stack_6","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(1,593.1176);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(2,853.5436);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(3,434.7055);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(4,200.8681);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(5,109.6753);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(6,59.02063);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(7,37.63265);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(8,20.02486);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(9,15.5402);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(10,9.670089);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(11,6.376116);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(12,6.058311);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(13,2.797772);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(14,2.558775);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(15,1.7398);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(16,1.830792);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(17,1.642023);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(18,0.7791201);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(19,0.1715502);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(20,1.155006);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(21,0.4412923);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(23,0.4592295);
   VbbHcc_duong_H_pt_all_stack_6->SetBinContent(24,0.139483);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(1,9.748352);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(2,11.58275);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(3,8.212326);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(4,5.631508);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(5,4.041717);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(6,3.005434);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(7,2.346545);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(8,1.75524);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(9,1.503811);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(10,1.164685);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(11,0.9285531);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(12,1.018673);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(13,0.6525739);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(14,0.593027);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(15,0.5284953);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(16,0.4902218);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(17,0.5255519);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(18,0.3238344);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(19,0.1213043);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(20,0.3941094);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(21,0.1975528);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(23,0.2936885);
   VbbHcc_duong_H_pt_all_stack_6->SetBinError(24,0.0986294);
   VbbHcc_duong_H_pt_all_stack_6->SetEntries(19122);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_H_pt_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_6->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_6->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_6,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_7 = new TH1D("VbbHcc_duong_H_pt_all_stack_7","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(1,1072.131);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(2,1586.141);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(3,848.4362);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(4,431.0432);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(5,219.9295);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(6,131.1023);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(7,78.03796);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(8,46.04993);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(9,23.18338);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(10,14.55304);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(11,9.695233);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(12,4.674324);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(13,2.362278);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(14,3.082621);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(15,1.817492);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(16,1.615823);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(17,0.5348552);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(18,0.2727529);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(19,0.9286817);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(20,0.5762398);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(21,0.3108407);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(22,0.1236251);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(23,0.07749366);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(25,0.1336818);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(27,0.1326785);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(28,0.1396395);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(29,0.1866113);
   VbbHcc_duong_H_pt_all_stack_7->SetBinContent(35,0.1161003);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(1,11.09543);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(2,13.38836);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(3,9.665179);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(4,6.911676);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(5,4.943373);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(6,3.817749);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(7,2.971889);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(8,2.239731);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(9,1.571237);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(10,1.272081);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(11,1.068564);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(12,0.6779914);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(13,0.4876581);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(14,0.6451072);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(15,0.4216371);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(16,0.4950986);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(17,0.2269393);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(18,0.1364218);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(19,0.3263122);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(20,0.2738648);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(21,0.2024674);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(22,0.1236251);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(23,0.05479629);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(25,0.1336818);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(27,0.09381786);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(28,0.09874003);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(29,0.102345);
   VbbHcc_duong_H_pt_all_stack_7->SetBinError(35,0.08209531);
   VbbHcc_duong_H_pt_all_stack_7->SetEntries(49668);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_H_pt_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_7->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_7->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_7,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_8 = new TH1D("VbbHcc_duong_H_pt_all_stack_8","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(1,1234.677);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(2,1598.995);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(3,733.6284);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(4,361.546);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(5,183.4702);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(6,99.3334);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(7,49.09534);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(8,26.32938);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(9,16.83375);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(10,10.8308);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(11,6.791188);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(12,2.328827);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(13,1.070396);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(14,1.41559);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(15,0.9716018);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(16,0.6497093);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(17,0.3763938);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(18,0.4330299);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(19,0.2348167);
   VbbHcc_duong_H_pt_all_stack_8->SetBinContent(22,0.6672425);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(1,15.89861);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(2,18.01944);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(3,12.19704);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(4,8.550068);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(5,6.142604);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(6,4.476749);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(7,3.15683);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(8,2.299114);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(9,1.801922);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(10,1.468908);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(11,1.187646);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(12,0.6743087);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(13,0.485285);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(14,0.5378101);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(15,0.4361144);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(16,0.3755278);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(17,0.2661506);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(18,0.3157467);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(19,0.2348167);
   VbbHcc_duong_H_pt_all_stack_8->SetBinError(22,0.3854907);
   VbbHcc_duong_H_pt_all_stack_8->SetEntries(22006);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_H_pt_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_8->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_8->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_8,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_9 = new TH1D("VbbHcc_duong_H_pt_all_stack_9","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(1,341.9614);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(2,557.8382);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(3,318.4493);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(4,156.1744);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(5,83.43131);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(6,46.31584);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(7,27.14552);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(8,16.25804);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(9,9.807134);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(10,5.332736);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(11,3.172201);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(12,1.953692);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(13,1.099641);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(14,0.8139097);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(15,0.4727776);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(16,0.3031936);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(17,0.2114022);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(18,0.203965);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(19,0.08924154);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(20,0.07183137);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(21,0.06745075);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(22,0.05125281);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(23,0.03155501);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(24,0.01285765);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(25,0.01098787);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(26,0.01937808);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(27,0.005048566);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(28,0.002068506);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(30,0.004340334);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(32,0.00776848);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(33,0.001676022);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(34,0.008093574);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(35,0.003179898);
   VbbHcc_duong_H_pt_all_stack_9->SetBinContent(36,0.001772933);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(1,0.7600555);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(2,0.9690457);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(3,0.7304665);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(4,0.5111273);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(5,0.3735758);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(6,0.2785799);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(7,0.2125892);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(8,0.1651719);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(9,0.1278697);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(10,0.09359242);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(11,0.07224095);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(12,0.05614652);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(13,0.04249505);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(14,0.03637456);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(15,0.02732);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(16,0.02241918);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(17,0.01856731);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(18,0.01808337);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(19,0.01228168);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(20,0.01118105);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(21,0.01051186);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(22,0.00910064);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(23,0.00714635);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(24,0.004608511);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(25,0.004179358);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(26,0.00553054);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(27,0.002915833);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(28,0.002068506);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(30,0.003098179);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(32,0.003508609);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(33,0.001676022);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(34,0.003638207);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(35,0.002248527);
   VbbHcc_duong_H_pt_all_stack_9->SetBinError(36,0.001772933);
   VbbHcc_duong_H_pt_all_stack_9->SetEntries(1020933);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_H_pt_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_9->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_9->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_9,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_10 = new TH1D("VbbHcc_duong_H_pt_all_stack_10","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(1,61.6151);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(2,129.9906);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(3,114.5324);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(4,71.47535);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(5,40.16272);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(6,23.04918);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(7,13.56562);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(8,8.669307);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(9,5.365099);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(10,3.461436);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(11,2.311345);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(12,1.604805);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(13,1.103187);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(14,0.8132508);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(15,0.5869271);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(16,0.3984977);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(17,0.3066832);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(18,0.2395383);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(19,0.1722258);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(20,0.1187805);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(21,0.08138852);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(22,0.0794419);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(23,0.05245802);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(24,0.05114729);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(25,0.03438465);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(26,0.03376483);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(27,0.0184394);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(28,0.01896581);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(29,0.01519263);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(30,0.01297366);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(31,0.006175764);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(32,0.004943498);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(33,0.007353146);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(34,0.003610968);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(35,0.002415342);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(37,0.002388681);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(38,0.001154968);
   VbbHcc_duong_H_pt_all_stack_10->SetBinContent(41,0.006045316);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(1,0.1580793);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(2,0.2295591);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(3,0.2154687);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(4,0.1700861);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(5,0.1273883);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(6,0.09643193);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(7,0.07397057);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(8,0.059114);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(9,0.04649736);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(10,0.0373482);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(11,0.03052603);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(12,0.0254949);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(13,0.02115584);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(14,0.01817699);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(15,0.01539666);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(16,0.01272848);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(17,0.01112407);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(18,0.009824108);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(19,0.008349272);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(20,0.006985797);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(21,0.005744475);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(22,0.005657475);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(23,0.004597822);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(24,0.004560168);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(25,0.003702225);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(26,0.003660727);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(27,0.002702757);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(28,0.002841786);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(29,0.002464575);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(30,0.002270312);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(31,0.00159892);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(32,0.001431307);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(33,0.001739862);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(34,0.001206917);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(35,0.0009886506);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(37,0.0009779718);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(38,0.0006684888);
   VbbHcc_duong_H_pt_all_stack_10->SetBinError(41,0.001567556);
   VbbHcc_duong_H_pt_all_stack_10->SetEntries(1213185);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_H_pt_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_10->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_10->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_10,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_11 = new TH1D("VbbHcc_duong_H_pt_all_stack_11","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(1,5.184846);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(2,9.106296);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(3,5.638789);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(4,2.864641);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(5,1.264856);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(6,0.7623351);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(7,0.3757108);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(8,0.3175126);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(9,0.1536189);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(10,0.08177277);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(11,0.05422667);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(12,0.03621639);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(13,0.01712486);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(14,0.00826517);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(15,0.007314843);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(16,0.00599229);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(17,0.00305224);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(19,0.002500367);
   VbbHcc_duong_H_pt_all_stack_11->SetBinContent(21,0.004303298);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(1,0.09380895);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(2,0.1233436);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(3,0.09713115);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(4,0.06890187);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(5,0.04551451);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(6,0.035245);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(7,0.02451488);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(8,0.02264194);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(9,0.01597121);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(10,0.01136444);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(11,0.009254011);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(12,0.007477681);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(13,0.005169548);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(14,0.003642519);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(15,0.00327831);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(16,0.003014528);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(17,0.00215826);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(19,0.001768026);
   VbbHcc_duong_H_pt_all_stack_11->SetBinError(21,0.00249464);
   VbbHcc_duong_H_pt_all_stack_11->SetEntries(18245);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_H_pt_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_11->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_11->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_11,"");
   
   TH1D *VbbHcc_duong_H_pt_all_stack_12 = new TH1D("VbbHcc_duong_H_pt_all_stack_12","",40,0,2000);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(1,20808.46);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(2,46505.82);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(3,47724.52);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(4,32025.61);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(5,17019.84);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(6,8468.252);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(7,5371.476);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(8,3283.163);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(9,2126.094);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(10,1186.669);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(11,699.2528);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(12,559.3728);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(13,414.4973);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(14,199.6482);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(15,212.7522);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(16,91.09015);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(17,53.81062);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(18,90.34881);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(19,71.82353);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(20,42.133);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(21,41.84029);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(22,19.2422);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(23,19.43127);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(24,7.39988);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(25,16.88838);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(27,8.763785);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(30,7.954352);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(34,6.303757);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(38,8.058298);
   VbbHcc_duong_H_pt_all_stack_12->SetBinContent(39,5.431438);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(1,304.4807);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(2,456.0884);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(3,462.1161);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(4,378.1252);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(5,274.2728);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(6,192.5264);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(7,151.8567);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(8,118.3955);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(9,94.08373);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(10,70.40992);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(11,53.88578);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(12,48.33934);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(13,41.34423);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(14,28.69616);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(15,29.3894);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(16,19.27581);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(17,14.71372);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(18,18.83374);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(19,17.1496);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(20,13.34991);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(21,13.24509);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(22,8.192754);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(23,8.469657);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(24,5.232506);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(25,8.445111);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(27,6.196932);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(30,5.624577);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(34,4.457429);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(38,5.698077);
   VbbHcc_duong_H_pt_all_stack_12->SetBinError(39,3.840606);
   VbbHcc_duong_H_pt_all_stack_12->SetEntries(47321);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_H_pt_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all_stack_12->SetLineColor(ci);
   VbbHcc_duong_H_pt_all_stack_12->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_H_pt_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_H_pt_all__31 = new TH1D("VbbHcc_duong_H_pt_all__31","",40,0,2000);
   VbbHcc_duong_H_pt_all__31->SetBinContent(1,2719357);
   VbbHcc_duong_H_pt_all__31->SetBinContent(2,5379894);
   VbbHcc_duong_H_pt_all__31->SetBinContent(3,4407166);
   VbbHcc_duong_H_pt_all__31->SetBinContent(4,2793364);
   VbbHcc_duong_H_pt_all__31->SetBinContent(5,1695501);
   VbbHcc_duong_H_pt_all__31->SetBinContent(6,1116523);
   VbbHcc_duong_H_pt_all__31->SetBinContent(7,790386);
   VbbHcc_duong_H_pt_all__31->SetBinContent(8,546242);
   VbbHcc_duong_H_pt_all__31->SetBinContent(9,356093);
   VbbHcc_duong_H_pt_all__31->SetBinContent(10,222363);
   VbbHcc_duong_H_pt_all__31->SetBinContent(11,138452);
   VbbHcc_duong_H_pt_all__31->SetBinContent(12,86774);
   VbbHcc_duong_H_pt_all__31->SetBinContent(13,55320);
   VbbHcc_duong_H_pt_all__31->SetBinContent(14,35907);
   VbbHcc_duong_H_pt_all__31->SetBinContent(15,23973);
   VbbHcc_duong_H_pt_all__31->SetBinContent(16,16227);
   VbbHcc_duong_H_pt_all__31->SetBinContent(17,11074);
   VbbHcc_duong_H_pt_all__31->SetBinContent(18,7508);
   VbbHcc_duong_H_pt_all__31->SetBinContent(19,5344);
   VbbHcc_duong_H_pt_all__31->SetBinContent(20,3855);
   VbbHcc_duong_H_pt_all__31->SetBinContent(21,2763);
   VbbHcc_duong_H_pt_all__31->SetBinContent(22,1886);
   VbbHcc_duong_H_pt_all__31->SetBinContent(23,1410);
   VbbHcc_duong_H_pt_all__31->SetBinContent(24,1006);
   VbbHcc_duong_H_pt_all__31->SetBinContent(25,762);
   VbbHcc_duong_H_pt_all__31->SetBinContent(26,620);
   VbbHcc_duong_H_pt_all__31->SetBinContent(27,411);
   VbbHcc_duong_H_pt_all__31->SetBinContent(28,318);
   VbbHcc_duong_H_pt_all__31->SetBinContent(29,259);
   VbbHcc_duong_H_pt_all__31->SetBinContent(30,129);
   VbbHcc_duong_H_pt_all__31->SetBinContent(31,142);
   VbbHcc_duong_H_pt_all__31->SetBinContent(32,108);
   VbbHcc_duong_H_pt_all__31->SetBinContent(33,83);
   VbbHcc_duong_H_pt_all__31->SetBinContent(34,44);
   VbbHcc_duong_H_pt_all__31->SetBinContent(35,52);
   VbbHcc_duong_H_pt_all__31->SetBinContent(36,35);
   VbbHcc_duong_H_pt_all__31->SetBinContent(37,17);
   VbbHcc_duong_H_pt_all__31->SetBinContent(38,16);
   VbbHcc_duong_H_pt_all__31->SetBinContent(39,23);
   VbbHcc_duong_H_pt_all__31->SetBinContent(40,6);
   VbbHcc_duong_H_pt_all__31->SetBinContent(41,46);
   VbbHcc_duong_H_pt_all__31->SetEntries(2.042146e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_H_pt_all__31->SetLineColor(ci);
   VbbHcc_duong_H_pt_all__31->SetLineWidth(2);
   VbbHcc_duong_H_pt_all__31->SetMarkerStyle(20);
   VbbHcc_duong_H_pt_all__31->SetMarkerSize(1.2);
   VbbHcc_duong_H_pt_all__31->GetXaxis()->SetRange(1,2000);
   VbbHcc_duong_H_pt_all__31->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all__31->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all__31->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all__31->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all__31->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all__31->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all__31->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all__31->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_H_pt_all__31->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all__31->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_H_pt_all__31->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_H_pt_all__31->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_H_pt_all__31->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_H_pt_all__31->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_H_pt_all_fx1031[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_VbbHcc_duong_H_pt_all_fy1031[40] = {
   1.734505e+07,
   2.772633e+07,
   1.033946e+07,
   1423420,
   367564.8,
   162450.3,
   81526.12,
   45310.77,
   26358.15,
   15743.95,
   9911.114,
   6432.217,
   4270.821,
   2764.207,
   1982.656,
   1274.438,
   881.0478,
   675.2376,
   483.7975,
   330.2583,
   247.6001,
   168.4232,
   127.8017,
   84.36487,
   80.46514,
   49.33168,
   40.51056,
   28.43068,
   17.92403,
   22.38026,
   8.723525,
   6.339709,
   4.085131,
   10.23077,
   2.607378,
   3.882163,
   1.948834,
   10.27171,
   6.502206,
   1.052184};
   Double_t Graph_from_VbbHcc_duong_H_pt_all_fex1031[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_VbbHcc_duong_H_pt_all_fey1031[40] = {
   143924.1,
   180593,
   105880.1,
   29544.09,
   7050.334,
   3148.76,
   1058.79,
   132.0695,
   104.1743,
   78.62699,
   60.75857,
   53.34347,
   45.2296,
   32.39745,
   32.01998,
   21.91297,
   17.16101,
   20.26482,
   18.29818,
   14.33803,
   13.92037,
   9.056271,
   9.078025,
   5.909614,
   8.835646,
   2.431869,
   6.477558,
   1.71647,
   1.176868,
   5.766869,
   0.7851602,
   0.784755,
   0.5330417,
   4.503672,
   0.5073298,
   0.8608947,
   0.3773057,
   5.712512,
   3.849328,
   0.4059399};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_duong_H_pt_all_fx1031,Graph_from_VbbHcc_duong_H_pt_all_fy1031,Graph_from_VbbHcc_duong_H_pt_all_fex1031,Graph_from_VbbHcc_duong_H_pt_all_fey1031);
   gre->SetName("Graph_from_VbbHcc_duong_H_pt_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_H_pt_all1031 = new TH1F("Graph_Graph_from_VbbHcc_duong_H_pt_all1031","",100,0,2200);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->SetMinimum(0.5816195);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->SetMaximum(3.069761e+07);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_H_pt_all1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_H_pt_all1031);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_H_pt_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_H_pt_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_H_pt_all","MC unc. (stat.)","fl");

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
   H_pt_VbbHcc_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(116.1295,-0.2774193,1562.903,1.658065);
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
   
   TH1D *data_mc_ratio__32 = new TH1D("data_mc_ratio__32","",40,0,2000);
   data_mc_ratio__32->SetBinContent(1,0.15678);
   data_mc_ratio__32->SetBinContent(2,0.1940356);
   data_mc_ratio__32->SetBinContent(3,0.4262473);
   data_mc_ratio__32->SetBinContent(4,1.962431);
   data_mc_ratio__32->SetBinContent(5,4.612795);
   data_mc_ratio__32->SetBinContent(6,6.873011);
   data_mc_ratio__32->SetBinContent(7,9.69488);
   data_mc_ratio__32->SetBinContent(8,12.05546);
   data_mc_ratio__32->SetBinContent(9,13.50979);
   data_mc_ratio__32->SetBinContent(10,14.12371);
   data_mc_ratio__32->SetBinContent(11,13.96937);
   data_mc_ratio__32->SetBinContent(12,13.49053);
   data_mc_ratio__32->SetBinContent(13,12.95301);
   data_mc_ratio__32->SetBinContent(14,12.98998);
   data_mc_ratio__32->SetBinContent(15,12.09135);
   data_mc_ratio__32->SetBinContent(16,12.73268);
   data_mc_ratio__32->SetBinContent(17,12.56912);
   data_mc_ratio__32->SetBinContent(18,11.11905);
   data_mc_ratio__32->SetBinContent(19,11.04594);
   data_mc_ratio__32->SetBinContent(20,11.67268);
   data_mc_ratio__32->SetBinContent(21,11.15913);
   data_mc_ratio__32->SetBinContent(22,11.19798);
   data_mc_ratio__32->SetBinContent(23,11.03272);
   data_mc_ratio__32->SetBinContent(24,11.92439);
   data_mc_ratio__32->SetBinContent(25,9.46994);
   data_mc_ratio__32->SetBinContent(26,12.56799);
   data_mc_ratio__32->SetBinContent(27,10.1455);
   data_mc_ratio__32->SetBinContent(28,11.1851);
   data_mc_ratio__32->SetBinContent(29,14.44988);
   data_mc_ratio__32->SetBinContent(30,5.764009);
   data_mc_ratio__32->SetBinContent(31,16.27782);
   data_mc_ratio__32->SetBinContent(32,17.03548);
   data_mc_ratio__32->SetBinContent(33,20.31758);
   data_mc_ratio__32->SetBinContent(34,4.300753);
   data_mc_ratio__32->SetBinContent(35,19.94341);
   data_mc_ratio__32->SetBinContent(36,9.015593);
   data_mc_ratio__32->SetBinContent(37,8.723166);
   data_mc_ratio__32->SetBinContent(38,1.557676);
   data_mc_ratio__32->SetBinContent(39,3.537261);
   data_mc_ratio__32->SetBinContent(40,5.702426);
   data_mc_ratio__32->SetBinContent(41,17.15438);
   data_mc_ratio__32->SetBinError(1,9.507309e-05);
   data_mc_ratio__32->SetBinError(2,8.365551e-05);
   data_mc_ratio__32->SetBinError(3,0.0002030401);
   data_mc_ratio__32->SetBinError(4,0.001174169);
   data_mc_ratio__32->SetBinError(5,0.003542543);
   data_mc_ratio__32->SetBinError(6,0.00650449);
   data_mc_ratio__32->SetBinError(7,0.01090493);
   data_mc_ratio__32->SetBinError(8,0.01631139);
   data_mc_ratio__32->SetBinError(9,0.0226395);
   data_mc_ratio__32->SetBinError(10,0.02995143);
   data_mc_ratio__32->SetBinError(11,0.03754284);
   data_mc_ratio__32->SetBinError(12,0.04579669);
   data_mc_ratio__32->SetBinError(13,0.05507186);
   data_mc_ratio__32->SetBinError(14,0.06855183);
   data_mc_ratio__32->SetBinError(15,0.07809329);
   data_mc_ratio__32->SetBinError(16,0.09995408);
   data_mc_ratio__32->SetBinError(17,0.1194408);
   data_mc_ratio__32->SetBinError(18,0.1283233);
   data_mc_ratio__32->SetBinError(19,0.1511018);
   data_mc_ratio__32->SetBinError(20,0.1880003);
   data_mc_ratio__32->SetBinError(21,0.212295);
   data_mc_ratio__32->SetBinError(22,0.2578511);
   data_mc_ratio__32->SetBinError(23,0.2938143);
   data_mc_ratio__32->SetBinError(24,0.3759563);
   data_mc_ratio__32->SetBinError(25,0.3430597);
   data_mc_ratio__32->SetBinError(26,0.5047426);
   data_mc_ratio__32->SetBinError(27,0.5004407);
   data_mc_ratio__32->SetBinError(28,0.6272292);
   data_mc_ratio__32->SetBinError(29,0.8978717);
   data_mc_ratio__32->SetBinError(30,0.5074927);
   data_mc_ratio__32->SetBinError(31,1.366005);
   data_mc_ratio__32->SetBinError(32,1.63924);
   data_mc_ratio__32->SetBinError(33,2.230145);
   data_mc_ratio__32->SetBinError(34,0.6483628);
   data_mc_ratio__32->SetBinError(35,2.765653);
   data_mc_ratio__32->SetBinError(36,1.523913);
   data_mc_ratio__32->SetBinError(37,2.115679);
   data_mc_ratio__32->SetBinError(38,0.3894191);
   data_mc_ratio__32->SetBinError(39,0.7375699);
   data_mc_ratio__32->SetBinError(40,2.328006);
   data_mc_ratio__32->SetBinError(41,3.965162);
   data_mc_ratio__32->SetMinimum(0.4);
   data_mc_ratio__32->SetMaximum(1.6);
   data_mc_ratio__32->SetEntries(1757.428);
   data_mc_ratio__32->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__32->SetLineColor(ci);
   data_mc_ratio__32->SetLineWidth(2);
   data_mc_ratio__32->SetMarkerStyle(20);
   data_mc_ratio__32->SetMarkerSize(1.2);
   data_mc_ratio__32->GetXaxis()->SetTitle("H p_{T} [GeV]");
   data_mc_ratio__32->GetXaxis()->SetRange(7,30);
   data_mc_ratio__32->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__32->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__32->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__32->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__32->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__32->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__32->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__32->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1032[40] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075,
   1125,
   1175,
   1225,
   1275,
   1325,
   1375,
   1425,
   1475,
   1525,
   1575,
   1625,
   1675,
   1725,
   1775,
   1825,
   1875,
   1925,
   1975};
   Double_t Graph_from_mc_statistical_error_fy1032[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1032[40] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t Graph_from_mc_statistical_error_fey1032[40] = {
   0.008297705,
   0.006513411,
   0.01024039,
   0.0207557,
   0.0191812,
   0.01938291,
   0.01298713,
   0.002914748,
   0.003952263,
   0.004994109,
   0.006130347,
   0.00829317,
   0.01059038,
   0.01172034,
   0.01615004,
   0.01719423,
   0.01947795,
   0.03001139,
   0.03782197,
   0.04341461,
   0.05622119,
   0.05377093,
   0.0710321,
   0.07004827,
   0.1098071,
   0.04929629,
   0.159898,
   0.06037387,
   0.06565866,
   0.2576766,
   0.09000492,
   0.1237841,
   0.1304834,
   0.4402087,
   0.1945747,
   0.2217564,
   0.1936059,
   0.5561403,
   0.5920035,
   0.385807};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1032,Graph_from_mc_statistical_error_fy1032,Graph_from_mc_statistical_error_fex1032,Graph_from_mc_statistical_error_fey1032);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1032 = new TH1F("Graph_Graph_from_mc_statistical_error1032","",100,0,2200);
   Graph_Graph_from_mc_statistical_error1032->SetMinimum(0.2895958);
   Graph_Graph_from_mc_statistical_error1032->SetMaximum(1.710404);
   Graph_Graph_from_mc_statistical_error1032->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1032->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1032);
   
   gre->Draw("e2");
   TLine *line = new TLine(300,1,1500,1);
   line->Draw();
   bottomPad->Modified();
   H_pt_VbbHcc_all->cd();
   H_pt_VbbHcc_all->Modified();
   H_pt_VbbHcc_all->cd();
   H_pt_VbbHcc_all->SetSelected(H_pt_VbbHcc_all);
}
