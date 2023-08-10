void H_dR_Bj0_both_17()
{
//=========Macro generated from canvas: H_dR_Bj0_both_17/H_dR_Bj0_both_17
//=========  (Thu Aug 10 12:25:00 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_17 = new TCanvas("H_dR_Bj0_both_17", "H_dR_Bj0_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_17->SetHighLightColor(2);
   H_dR_Bj0_both_17->Range(0,0,1,1);
   H_dR_Bj0_both_17->SetFillColor(0);
   H_dR_Bj0_both_17->SetFillStyle(4000);
   H_dR_Bj0_both_17->SetBorderMode(0);
   H_dR_Bj0_both_17->SetBorderSize(2);
   H_dR_Bj0_both_17->SetFrameFillStyle(1000);
   H_dR_Bj0_both_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-111.1868,6.314516,111085.6);
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
   st->SetMaximum(95205.65);
   
   TH1F *st_stack_234 = new TH1F("st_stack_234","",30,0,6);
   st_stack_234->SetMinimum(0.01);
   st_stack_234->SetMaximum(99965.93);
   st_stack_234->SetDirectory(0);
   st_stack_234->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_234->SetLineColor(ci);
   st_stack_234->GetXaxis()->SetRange(1,30);
   st_stack_234->GetXaxis()->SetLabelFont(42);
   st_stack_234->GetXaxis()->SetLabelSize(0.035);
   st_stack_234->GetXaxis()->SetTitleSize(0.035);
   st_stack_234->GetXaxis()->SetTitleFont(42);
   st_stack_234->GetYaxis()->SetTitle("Events/0.2");
   st_stack_234->GetYaxis()->SetLabelFont(42);
   st_stack_234->GetYaxis()->SetLabelSize(0.05);
   st_stack_234->GetYaxis()->SetTitleSize(0.057);
   st_stack_234->GetYaxis()->SetTitleOffset(1.2);
   st_stack_234->GetYaxis()->SetTitleFont(42);
   st_stack_234->GetZaxis()->SetLabelFont(42);
   st_stack_234->GetZaxis()->SetLabelSize(0.035);
   st_stack_234->GetZaxis()->SetTitleSize(0.035);
   st_stack_234->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_234);
   
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(1,5637.231);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(2,40281.65);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(3,24677.98);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(4,16496.66);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(5,14828.06);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(6,10737.95);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(7,7914.141);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(8,10220.86);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(9,21709.36);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(10,7874.239);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(11,6826.184);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(12,8242.669);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(13,6300.311);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(14,5875.271);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(15,6294.099);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(16,5357.58);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(17,3001.796);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(18,2024.044);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(19,1743.416);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(20,976.8982);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(21,1302.522);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(22,781.2828);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(23,429.7283);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(24,133.8911);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(25,18.76143);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(26,14.69924);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(27,14.16822);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinContent(28,32.59904);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(1,701.3607);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(2,14947.16);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(3,1980.605);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(4,1563.212);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(5,1593.786);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(6,1316.985);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(7,1070.988);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(8,1769.36);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(9,14848.63);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(10,1160.016);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(11,1061.374);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(12,1190.455);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(13,990.1571);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(14,952.3525);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(15,956.6599);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(16,873.2454);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(17,621.8847);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(18,486.4937);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(19,482.3384);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(20,386.799);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(21,473.6939);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(22,384.0238);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(23,273.693);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(24,47.25189);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(25,10.93533);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(26,10.03251);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(27,10.01845);
   VbbHcc_both_H_dR_Bj0_stack_1->SetBinError(28,25.97426);
   VbbHcc_both_H_dR_Bj0_stack_1->SetEntries(10320);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(1,35.93215);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(2,104.9901);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(3,124.6377);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(4,106.2443);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(5,92.94813);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(6,77.08509);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(7,69.40555);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(8,56.88269);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(9,50.74474);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(10,45.22243);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(11,39.07293);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(12,40.84161);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(13,33.77337);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(14,37.13157);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(15,34.59582);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(16,32.29383);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(17,17.89422);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(18,14.04955);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(19,9.421821);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(20,7.79215);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(21,4.051921);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(22,3.421038);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(23,2.364331);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(24,1.944246);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(25,1.056276);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(26,0.6301665);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(27,0.159087);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(28,0.3154485);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinContent(31,0.05302899);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(1,2.524752);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(2,3.989923);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(3,4.448068);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(4,4.04046);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(5,3.846404);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(6,3.4917);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(7,3.333907);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(8,3.039929);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(9,2.815167);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(10,2.62893);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(11,2.400672);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(12,2.586337);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(13,2.246202);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(14,2.436348);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(15,2.302854);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(16,2.30094);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(17,1.646783);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(18,1.437623);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(19,1.127415);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(20,1.063385);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(21,0.7383869);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(22,0.6335509);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(23,0.5384968);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(24,0.5683321);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(25,0.4085775);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(26,0.2969519);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(27,0.0918489);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(28,0.2686248);
   VbbHcc_both_H_dR_Bj0_stack_2->SetBinError(31,0.05302899);
   VbbHcc_both_H_dR_Bj0_stack_2->SetEntries(12006);

   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(1,511.3237);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(2,2073.23);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(3,2632.1);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(4,2375.003);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(5,1970.296);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(6,1641.833);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(7,1356.233);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(8,1156.988);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(9,1001.903);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(10,903.2683);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(11,791.7887);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(12,745.7005);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(13,667.6727);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(14,631.7017);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(15,588.2693);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(16,538.7709);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(17,334.1254);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(18,224.185);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(19,152.4283);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(20,104.647);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(21,69.64282);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(22,44.56706);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(23,30.43192);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(24,21.24217);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(25,12.28867);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(26,6.627715);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(27,3.574699);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(28,1.829122);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(29,1.906703);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(30,0.5279882);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinContent(31,1.590415);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(1,5.712339);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(2,11.51334);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(3,12.99275);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(4,12.33002);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(5,11.22183);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(6,10.23704);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(7,9.293141);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(8,8.571893);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(9,7.974865);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(10,7.583972);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(11,7.097354);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(12,6.895434);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(13,6.514811);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(14,6.346588);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(15,6.129279);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(16,5.867452);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(17,4.609941);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(18,3.775301);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(19,3.114423);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(20,2.575705);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(21,2.096264);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(22,1.683982);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(23,1.385901);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(24,1.159918);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(25,0.885417);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(26,0.6412043);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(27,0.4734162);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(28,0.3496634);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(29,0.3530009);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(30,0.17877);
   VbbHcc_both_H_dR_Bj0_stack_3->SetBinError(31,0.311718);
   VbbHcc_both_H_dR_Bj0_stack_3->SetEntries(333938);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(1,96.91335);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(2,335.2819);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(3,346.4342);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(4,260.042);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(5,187.3472);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(6,155.2773);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(7,144.7534);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(8,126.9352);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(9,92.73672);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(10,99.20422);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(11,104.8286);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(12,89.94117);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(13,73.24452);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(14,80.45504);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(15,79.01698);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(16,74.34757);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(17,40.72851);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(18,24.43449);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(19,13.50615);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(20,12.01586);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(21,8.89216);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(22,4.135799);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(23,2.768673);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(24,1.867091);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(25,1.585145);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(26,0.2327714);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(27,0.1613479);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(28,0.08992428);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(29,0.07142358);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinContent(30,0.360867);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(1,4.504182);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(2,10.70035);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(3,13.01829);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(4,11.57455);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(5,9.110118);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(6,8.292851);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(7,8.573892);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(8,8.739737);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(9,5.121825);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(10,6.938456);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(11,7.994267);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(12,7.221507);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(13,4.637323);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(14,4.791293);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(15,4.79269);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(16,5.320643);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(17,2.936189);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(18,2.283067);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(19,1.518083);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(20,1.670797);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(21,1.34747);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(22,0.9688828);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(23,0.7909064);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(24,0.5906862);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(25,0.658197);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(26,0.1352369);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(27,0.1148377);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(28,0.08992428);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(29,0.07142358);
   VbbHcc_both_H_dR_Bj0_stack_4->SetBinError(30,0.360867);
   VbbHcc_both_H_dR_Bj0_stack_4->SetEntries(18216);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(1,13.36667);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(2,27.813);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(3,42.31751);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(4,20.13079);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(5,23.90548);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(6,15.29409);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(7,11.74636);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(8,16.67856);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(9,7.479309);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(10,15.78572);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(11,10.17925);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(12,12.33433);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(13,7.837317);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(14,7.577318);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(15,8.058259);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(16,6.953074);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(17,2.736385);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(18,5.9634);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(19,2.64107);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(20,1.030947);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(21,0.504115);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(22,2.318649);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(23,0.3507357);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(24,0.0448957);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(25,0.1689571);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinContent(26,0.1695762);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(1,2.020563);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(2,2.867442);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(3,7.905759);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(4,2.730382);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(5,3.624808);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(6,2.419387);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(7,2.278389);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(8,6.941102);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(9,0.9950452);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(10,3.086423);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(11,2.256208);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(12,2.543693);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(13,1.806118);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(14,1.046483);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(15,1.56387);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(16,1.446288);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(17,0.5306112);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(18,1.83078);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(19,0.6896579);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(20,0.3337836);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(21,0.2389069);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(22,1.254058);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(23,0.1693601);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(24,0.0448957);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(25,0.1194707);
   VbbHcc_both_H_dR_Bj0_stack_5->SetBinError(26,0.1695762);
   VbbHcc_both_H_dR_Bj0_stack_5->SetEntries(2376);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(2,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(16,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(2,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(10,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(16,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(18,0.3153059);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(5);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(2,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(3,0.9917687);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(4,0.9917687);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(5,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(8,0.7438266);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(10,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(11,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(14,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(16,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinContent(22,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(2,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(3,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(4,0.4958844);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(5,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(8,0.4294485);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(9,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(10,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(11,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(12,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(14,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(16,0.3506432);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(18,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetBinError(22,0.2479422);
   VbbHcc_both_H_dR_Bj0_stack_7->SetEntries(26);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,7.343543);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,6.837091);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,5.824189);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,1.772579);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.025805);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,0.5064512);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,1.012902);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,2.532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.266128);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,1.772579);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,1.519354);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,0.7596768);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.2532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.363662);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.315799);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.214427);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.669972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.7162302);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.3581151);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.5064512);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.8007697);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.5662297);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.669972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.6202735);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.4385996);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.2532256);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(184);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(1,1.865283);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(2,8.201244);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(3,8.372937);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(4,5.707533);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(5,3.588878);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(6,2.530384);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(7,1.99697);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(8,1.786938);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(9,1.653584);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(10,1.535233);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(11,1.551902);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(12,1.408547);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(13,1.461888);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(14,1.371875);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(15,1.390211);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(16,1.22852);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(17,0.72511);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(18,0.4484014);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(19,0.248371);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(20,0.1216851);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(21,0.0850129);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(22,0.06667678);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(23,0.02833763);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(24,0.01500228);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(25,0.01333536);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(26,0.006667678);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(27,0.003333839);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(28,0.00166692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinContent(29,0.00166692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(1,0.05576089);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(2,0.1169223);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(3,0.1181398);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(4,0.09753972);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(5,0.07734579);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(6,0.06494572);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(7,0.05769565);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(8,0.0545773);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(9,0.05250135);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(10,0.05058764);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(11,0.05086154);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(12,0.04845549);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(13,0.04936447);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(14,0.04782055);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(15,0.04813907);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(16,0.04525311);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(17,0.03476636);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(18,0.02733951);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(19,0.02034735);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(20,0.01424217);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(21,0.01190419);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(22,0.01054253);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(23,0.006872885);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(24,0.005000759);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(25,0.004714761);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(26,0.003333839);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(27,0.00235738);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(28,0.00166692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetBinError(29,0.00166692);
   VbbHcc_both_H_dR_Bj0_stack_9->SetEntries(28446);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(1,0.689103);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(2,3.190738);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(3,3.733126);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(4,2.830393);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(5,1.876122);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(6,1.343294);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(7,1.025758);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(8,0.8607553);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(9,0.7784619);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(10,0.6920123);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(11,0.6101346);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(12,0.5756379);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(13,0.5232694);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(14,0.5195288);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(15,0.4783821);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(16,0.4472104);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(17,0.2514519);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(18,0.1579368);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(19,0.09060582);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(20,0.05112163);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(21,0.03283422);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(22,0.01745617);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(23,0.01496243);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(24,0.008312461);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(25,0.004571853);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(26,0.003324984);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(27,0.001662492);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(28,0.001246869);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(29,0.001246869);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinContent(31,0.0008312461);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(1,0.01692357);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(2,0.03641626);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(3,0.03939001);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(4,0.03429834);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(5,0.02792418);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(6,0.02362845);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(7,0.02064772);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(8,0.01891427);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(9,0.0179874);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(10,0.01695925);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(11,0.01592438);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(12,0.01546766);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(13,0.0147473);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(14,0.01469449);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(15,0.01410059);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(16,0.01363345);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(17,0.01022297);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(18,0.008101984);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(19,0.006136601);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(20,0.004609482);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(21,0.003694138);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(22,0.002693545);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(23,0.002493738);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(24,0.001858723);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(25,0.001378466);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(26,0.001175559);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(27,0.0008312461);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(28,0.0007198802);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(29,0.0007198802);
   VbbHcc_both_H_dR_Bj0_stack_10->SetBinError(31,0.0005877797);
   VbbHcc_both_H_dR_Bj0_stack_10->SetEntries(50073);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(1,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(2,0.02686427);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(3,0.03318527);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(4,0.02054326);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(5,0.01422226);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(6,0.009481507);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(7,0.009481507);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(10,0.006321005);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(12,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(15,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(16,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(17,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(1,0.002737075);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(2,0.006515542);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(3,0.00724162);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(4,0.005697677);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(5,0.004740753);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(6,0.003870809);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(7,0.003870809);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(8,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(10,0.003160502);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(12,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(15,0.002737075);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(16,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(17,0.002234813);
   VbbHcc_both_H_dR_Bj0_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_H_dR_Bj0_stack_11->SetEntries(95);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(1,0.002283662);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(2,0.008304226);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(3,0.01058789);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(4,0.01038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(5,0.005397747);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(6,0.00477493);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(7,0.003529296);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(8,0.003114085);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(9,0.002906479);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(10,0.002698874);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(11,0.001660845);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(12,0.001038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(13,0.001660845);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(14,0.000622817);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(15,0.00145324);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(18,0.001245634);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(19,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinContent(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(1,0.0006885501);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(2,0.001313013);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(3,0.001482601);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(4,0.001467994);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(5,0.001058585);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(6,0.0009956417);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(7,0.00085598);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(8,0.0008040532);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(9,0.0007767892);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(10,0.0007485328);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(11,0.0005871975);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(12,0.0004642204);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(13,0.0005871975);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(14,0.0003595835);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(15,0.0005492729);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(18,0.0005085279);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(19,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(21,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetBinError(29,0.0002076057);
   VbbHcc_both_H_dR_Bj0_stack_12->SetEntries(308);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_both_H_dR_Bj0__642 = new TH1D("VbbHcc_both_H_dR_Bj0__642","",30,0,6);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(1,2809);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(2,8643);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(3,8695);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(4,6836);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(5,5662);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(6,4707);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(7,4070);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(8,3597);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(9,3068);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(10,2793);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(11,2536);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(12,2356);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(13,2163);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(14,2150);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(15,2068);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(16,1825);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(17,1167);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(18,802);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(19,586);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(20,417);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(21,259);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(22,163);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(23,119);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(24,94);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(25,44);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(26,24);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(27,14);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(28,5);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(29,4);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(30,2);
   VbbHcc_both_H_dR_Bj0__642->SetBinContent(31,6);
   VbbHcc_both_H_dR_Bj0__642->SetEntries(67713);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_Bj0__642->SetLineColor(ci);
   VbbHcc_both_H_dR_Bj0__642->SetLineWidth(2);
   VbbHcc_both_H_dR_Bj0__642->SetMarkerStyle(20);
   VbbHcc_both_H_dR_Bj0__642->SetMarkerSize(1.2);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0__642->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__642->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0__642->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__642->Draw("same E");
   
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fx1467[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fy1467[30] = {
   6299.861,
   42842.54,
   27843.45,
   19273.78,
   17110.83,
   12632.85,
   9501.848,
   11583.51,
   22866.93,
   8942.287,
   7775.222,
   9134.735,
   7087.358,
   6637.06,
   7007.18,
   6014.209,
   3399.779,
   2294.607,
   1922.007,
   1102.557,
   1385.731,
   836.0576,
   465.6875,
   159.0128,
   33.87839,
   22.36946,
   18.06835,
   34.83645,
   1.981248,
   0.8888553};
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fex1467[30] = {
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
   Double_t Graph_from_VbbHcc_both_H_dR_Bj0_fey1467[30] = {
   701.4063,
   14947.17,
   1980.712,
   1563.312,
   1593.86,
   1317.058,
   1071.07,
   1769.419,
   14848.63,
   1160.069,
   1061.433,
   1190.503,
   990.1939,
   952.3898,
   956.6957,
   873.2859,
   621.9115,
   486.5197,
   482.3527,
   386.8128,
   473.7011,
   384.0314,
   273.6982,
   47.27326,
   10.99909,
   10.0597,
   10.0307,
   25.97816,
   0.3601587,
   0.4027204};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_both_H_dR_Bj0_fx1467,Graph_from_VbbHcc_both_H_dR_Bj0_fy1467,Graph_from_VbbHcc_both_H_dR_Bj0_fex1467,Graph_from_VbbHcc_both_H_dR_Bj0_fey1467);
   gre->SetName("Graph_from_VbbHcc_both_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_both_H_dR_Bj01467 = new TH1F("Graph_Graph_from_VbbHcc_both_H_dR_Bj01467","",100,0,6.6);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetMinimum(0.4375214);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetMaximum(63568.63);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetDirectory(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_both_H_dR_Bj01467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_both_H_dR_Bj01467);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_both_H_dR_Bj0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_dR_Bj0_both_17->cd();
  
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
   
   TH1D *data_mc_ratio__643 = new TH1D("data_mc_ratio__643","",30,0,6);
   data_mc_ratio__643->SetBinContent(1,0.4458829);
   data_mc_ratio__643->SetBinContent(2,0.2017387);
   data_mc_ratio__643->SetBinContent(3,0.3122817);
   data_mc_ratio__643->SetBinContent(4,0.3546788);
   data_mc_ratio__643->SetBinContent(5,0.3309016);
   data_mc_ratio__643->SetBinContent(6,0.3726);
   data_mc_ratio__643->SetBinContent(7,0.4283378);
   data_mc_ratio__643->SetBinContent(8,0.3105275);
   data_mc_ratio__643->SetBinContent(9,0.1341675);
   data_mc_ratio__643->SetBinContent(10,0.3123362);
   data_mc_ratio__643->SetBinContent(11,0.3261643);
   data_mc_ratio__643->SetBinContent(12,0.2579166);
   data_mc_ratio__643->SetBinContent(13,0.3051913);
   data_mc_ratio__643->SetBinContent(14,0.3239386);
   data_mc_ratio__643->SetBinContent(15,0.2951259);
   data_mc_ratio__643->SetBinContent(16,0.3034481);
   data_mc_ratio__643->SetBinContent(17,0.3432576);
   data_mc_ratio__643->SetBinContent(18,0.3495152);
   data_mc_ratio__643->SetBinContent(19,0.3048896);
   data_mc_ratio__643->SetBinContent(20,0.3782117);
   data_mc_ratio__643->SetBinContent(21,0.186905);
   data_mc_ratio__643->SetBinContent(22,0.1949626);
   data_mc_ratio__643->SetBinContent(23,0.2555362);
   data_mc_ratio__643->SetBinContent(24,0.5911473);
   data_mc_ratio__643->SetBinContent(25,1.298763);
   data_mc_ratio__643->SetBinContent(26,1.072891);
   data_mc_ratio__643->SetBinContent(27,0.7748354);
   data_mc_ratio__643->SetBinContent(28,0.1435278);
   data_mc_ratio__643->SetBinContent(29,2.01893);
   data_mc_ratio__643->SetBinContent(30,2.250085);
   data_mc_ratio__643->SetBinContent(31,3.649025);
   data_mc_ratio__643->SetBinError(1,0.008412884);
   data_mc_ratio__643->SetBinError(2,0.002169986);
   data_mc_ratio__643->SetBinError(3,0.003348974);
   data_mc_ratio__643->SetBinError(4,0.004289772);
   data_mc_ratio__643->SetBinError(5,0.004397582);
   data_mc_ratio__643->SetBinError(6,0.005430887);
   data_mc_ratio__643->SetBinError(7,0.006714121);
   data_mc_ratio__643->SetBinError(8,0.005177616);
   data_mc_ratio__643->SetBinError(9,0.002422254);
   data_mc_ratio__643->SetBinError(10,0.005909992);
   data_mc_ratio__643->SetBinError(11,0.00647682);
   data_mc_ratio__643->SetBinError(12,0.005313635);
   data_mc_ratio__643->SetBinError(13,0.006562116);
   data_mc_ratio__643->SetBinError(14,0.00698624);
   data_mc_ratio__643->SetBinError(15,0.00648981);
   data_mc_ratio__643->SetBinError(16,0.007103182);
   data_mc_ratio__643->SetBinError(17,0.01004812);
   data_mc_ratio__643->SetBinError(18,0.01234181);
   data_mc_ratio__643->SetBinError(19,0.01259487);
   data_mc_ratio__643->SetBinError(20,0.01852111);
   data_mc_ratio__643->SetBinError(21,0.01161371);
   data_mc_ratio__643->SetBinError(22,0.01527065);
   data_mc_ratio__643->SetBinError(23,0.02342496);
   data_mc_ratio__643->SetBinError(24,0.06097219);
   data_mc_ratio__643->SetBinError(25,0.1957959);
   data_mc_ratio__643->SetBinError(26,0.219003);
   data_mc_ratio__643->SetBinError(27,0.2070835);
   data_mc_ratio__643->SetBinError(28,0.0641876);
   data_mc_ratio__643->SetBinError(29,1.009465);
   data_mc_ratio__643->SetBinError(30,1.59105);
   data_mc_ratio__643->SetBinError(31,1.646704);
   data_mc_ratio__643->SetMinimum(0.4);
   data_mc_ratio__643->SetMaximum(1.6);
   data_mc_ratio__643->SetEntries(41.1059);
   data_mc_ratio__643->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__643->SetLineColor(ci);
   data_mc_ratio__643->SetLineWidth(2);
   data_mc_ratio__643->SetMarkerStyle(20);
   data_mc_ratio__643->SetMarkerSize(1.2);
   data_mc_ratio__643->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__643->GetXaxis()->SetRange(1,30);
   data_mc_ratio__643->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__643->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__643->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__643->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__643->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__643->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__643->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__643->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__643->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__643->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__643->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__643->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__643->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__643->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__643->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__643->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__643->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1468[30] = {
   0.1113368,
   0.3488861,
   0.07113744,
   0.08111083,
   0.09314924,
   0.1042566,
   0.1127223,
   0.1527532,
   0.6493494,
   0.1297284,
   0.1365148,
   0.130327,
   0.1397127,
   0.1434957,
   0.1365308,
   0.1452038,
   0.182927,
   0.2120274,
   0.250963,
   0.3508324,
   0.3418421,
   0.459336,
   0.5877294,
   0.2972921,
   0.3246638,
   0.449707,
   0.5551532,
   0.7457179,
   0.1817838,
   0.4530776};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1468,Graph_from_mc_statistical_error_fy1468,Graph_from_mc_statistical_error_fex1468,Graph_from_mc_statistical_error_fey1468);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1468 = new TH1F("Graph_Graph_from_mc_statistical_error1468","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1468->SetMinimum(0.1051385);
   Graph_Graph_from_mc_statistical_error1468->SetMaximum(1.894861);
   Graph_Graph_from_mc_statistical_error1468->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1468->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1468->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1468);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->Modified();
   H_dR_Bj0_both_17->cd();
   H_dR_Bj0_both_17->SetSelected(H_dR_Bj0_both_17);
}
