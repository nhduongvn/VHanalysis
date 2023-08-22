void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(0,0,1,1);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetFillStyle(4000);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetFrameFillStyle(1000);
   Sphericity_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1818.448,1.052419,1816640);
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
   st->SetMaximum(1556946);
   
   TH1F *st_stack_155 = new TH1F("st_stack_155","",25,0,1);
   st_stack_155->SetMinimum(0.01);
   st_stack_155->SetMaximum(1634794);
   st_stack_155->SetDirectory(0);
   st_stack_155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_155->SetLineColor(ci);
   st_stack_155->GetXaxis()->SetRange(1,25);
   st_stack_155->GetXaxis()->SetLabelFont(42);
   st_stack_155->GetXaxis()->SetLabelSize(0.035);
   st_stack_155->GetXaxis()->SetTitleSize(0.035);
   st_stack_155->GetXaxis()->SetTitleFont(42);
   st_stack_155->GetYaxis()->SetTitle("Events/0.04");
   st_stack_155->GetYaxis()->SetLabelFont(42);
   st_stack_155->GetYaxis()->SetLabelSize(0.05);
   st_stack_155->GetYaxis()->SetTitleSize(0.057);
   st_stack_155->GetYaxis()->SetTitleOffset(1.2);
   st_stack_155->GetYaxis()->SetTitleFont(42);
   st_stack_155->GetZaxis()->SetLabelFont(42);
   st_stack_155->GetZaxis()->SetLabelSize(0.035);
   st_stack_155->GetZaxis()->SetTitleSize(0.035);
   st_stack_155->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_155);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,615485.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,555816.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,321531.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,168010.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,81176.81);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,40708.65);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,12662.43);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3320.182);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1496.272);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,849.0345);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,328.7389);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,450.0695);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,114.4576);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,72.48741);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,54.42481);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,69.00786);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,531.0297);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,30.76236);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,5.119067);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,12.28168);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,12662.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,12491.95);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,23923.64);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,5881.257);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,4385.825);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3436.602);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,2390.553);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,959.2287);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,569.0826);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,433.1281);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,100.974);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,304.8636);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,51.66967);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,35.47621);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,32.90672);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,35.751);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,491.1382);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,16.44764);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,5.119067);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,8.881712);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(105593);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,3985.415);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,3758.141);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,2124.735);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1210.076);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,657.0434);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,315.6694);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,131.7799);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,55.35632);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,27.11063);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,12.07132);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,9.63859);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,5.998212);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,4.035649);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,3.013789);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.678452);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,1.965152);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.453386);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.450321);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.2131275);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.2712607);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.06099754);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,28.20568);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,27.59364);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,23.6645);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,15.97696);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,11.93343);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,9.498275);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,5.936871);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,3.300323);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,2.236956);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.445004);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,1.284309);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.049599);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.8084707);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.756407);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.7766006);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.6048814);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4689066);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.3276833);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.1071812);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.2712607);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.06099754);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(152694);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,75769.93);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,76529.54);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,40909.41);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,22646.8);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,12187.2);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,5841.239);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,2513.835);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1099.823);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,538.4027);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,288.0203);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,168.7129);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,103.858);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,68.11373);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,47.95447);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,30.87114);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,22.99184);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,15.3351);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,10.33155);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,5.797756);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,3.153321);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.8417777);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.3093142);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.06584265);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,80.67457);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,81.85519);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,59.08542);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,44.29548);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,32.10861);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,22.25936);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,13.91043);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,9.297902);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,6.332403);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,4.639735);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,3.40412);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.657448);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,2.137419);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.868788);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.441034);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.294191);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,1.318385);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.8173761);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.634828);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.4883411);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.2396229);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1424491);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.06584265);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3537992);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_3->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_3,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,3931.502);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,3620.744);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,2065.278);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1250.279);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,639.9776);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,277.3223);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,88.15756);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,27.76677);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,6.61281);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,3.000235);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,4.329841);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,7.57321);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8256022);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.561778);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.409581);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.2215735);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.3639387);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,1.558226);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,53.8156);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,53.41571);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,40.47667);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,30.07137);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,20.39013);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,13.39681);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.624438);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.030052);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.324333);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.8061422);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,1.134286);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,5.788347);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3414778);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2560095);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.2061864);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.1586091);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.2893377);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,1.208779);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(53670);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_4->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_4,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,1293.293);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,1055.131);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,590.064);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,388.2847);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,189.0763);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,82.00544);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,38.87267);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,13.59046);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,2.371131);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,2.520182);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,0.4532679);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.1379088);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.7811874);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.4176332);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.7252399);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1668532);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.2547378);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,65.68987);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,46.85129);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,31.48204);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,32.30574);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,14.21513);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,8.89092);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,12.5186);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,4.223229);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.7554068);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,0.7835273);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.3209923);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.1379088);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.4520283);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.2227392);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.484007);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1309316);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.2547378);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(13622);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_5->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_5,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,13.43697);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,10.20939);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,7.189318);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,6.515833);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,0.7829594);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,1.156598);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.3970443);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,3.695047);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,2.592816);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,2.119748);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,2.33866);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.561677);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.818075);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.3970443);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(60);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_6->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_6,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,35.6413);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,24.61416);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,14.00158);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,10.36846);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,3.855367);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,3.281365);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,0.3524656);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.3455143);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,3.74665);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,3.167708);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,2.316287);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,2.059631);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,1.257615);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,1.068958);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.3524656);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.3455143);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(247);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_7->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_7,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,58.89023);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,42.10016);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,24.50113);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,14.84873);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,10.03354);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,5.858991);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.8900214);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.2743643);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.275309);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,4.287907);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,3.540766);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.690238);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,2.193994);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.743442);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,1.330304);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.5182105);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.2743643);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.275309);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(543);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_8->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_8,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,35.98039);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,32.54102);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,17.99315);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,12.57162);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,8.386546);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,4.290407);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,1.136816);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2010205);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.08487491);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.03285349);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.01498879);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.006605692);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.002155772);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.005805929);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.002884128);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(16,0.003771732);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.3649486);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.3402824);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.2567282);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.212707);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.1666318);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.1666158);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.06729535);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.02456907);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.01619569);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.01041636);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.006329091);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.004715319);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.002155772);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.004105759);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.002884128);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(16,0.003771732);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(38365);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_9->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_9,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,15.56943);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,15.56517);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,8.769338);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,5.38322);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,3.072141);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.459601);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.4813479);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1680139);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.05918215);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.0434064);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.0201232);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01019803);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.01080891);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.004016799);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.003530636);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.002341416);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.003637509);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0006064324);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001612353);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.09265358);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.09209405);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.06928138);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.05443785);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.04118336);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.02848439);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01627908);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.009565586);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.005615757);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.004832442);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.003260041);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.002268787);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.002389171);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.00136118);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001221829);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.001014823);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.001386174);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0006064324);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0008094291);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(94157);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_10->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_10,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2099388);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.2451662);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1129681);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.11782);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.05893977);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.03397615);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.009276801);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.02329062);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.02512345);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01781199);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.01774072);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.01220626);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.009162975);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.004658393);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(352);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_11->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_11,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_12 = new TH1D("VbbHcc_algo_Sphericity_stack_12","",25,0,1);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(1,0.1240658);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(2,0.1260668);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(3,0.06358922);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(4,0.04478742);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(5,0.02571978);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(6,0.008678235);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(7,0.004492848);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(8,0.002277131);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(9,0.0003677245);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(10,0.0003121873);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(11,0.000399512);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(12,0.0003077663);
   VbbHcc_algo_Sphericity_stack_12->SetBinContent(13,0.0002959738);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(1,0.006503282);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(2,0.007135009);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(3,0.004550683);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(4,0.003905612);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(5,0.004291092);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(6,0.001729744);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(7,0.001261367);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(8,0.0008644188);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(9,0.0003677245);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(10,0.0003121873);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(11,0.000399512);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(12,0.0003077663);
   VbbHcc_algo_Sphericity_stack_12->SetBinError(13,0.0002959738);
   VbbHcc_algo_Sphericity_stack_12->SetEntries(1270);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_12->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_Sphericity__425 = new TH1D("VbbHcc_algo_Sphericity__425","",25,0,1);
   VbbHcc_algo_Sphericity__425->SetBinContent(1,695724);
   VbbHcc_algo_Sphericity__425->SetBinContent(2,649224);
   VbbHcc_algo_Sphericity__425->SetBinContent(3,373078);
   VbbHcc_algo_Sphericity__425->SetBinContent(4,206237);
   VbbHcc_algo_Sphericity__425->SetBinContent(5,103627);
   VbbHcc_algo_Sphericity__425->SetBinContent(6,43603);
   VbbHcc_algo_Sphericity__425->SetBinContent(7,15133);
   VbbHcc_algo_Sphericity__425->SetBinContent(8,5430);
   VbbHcc_algo_Sphericity__425->SetBinContent(9,2374);
   VbbHcc_algo_Sphericity__425->SetBinContent(10,1286);
   VbbHcc_algo_Sphericity__425->SetBinContent(11,739);
   VbbHcc_algo_Sphericity__425->SetBinContent(12,484);
   VbbHcc_algo_Sphericity__425->SetBinContent(13,330);
   VbbHcc_algo_Sphericity__425->SetBinContent(14,221);
   VbbHcc_algo_Sphericity__425->SetBinContent(15,173);
   VbbHcc_algo_Sphericity__425->SetBinContent(16,135);
   VbbHcc_algo_Sphericity__425->SetBinContent(17,66);
   VbbHcc_algo_Sphericity__425->SetBinContent(18,56);
   VbbHcc_algo_Sphericity__425->SetBinContent(19,22);
   VbbHcc_algo_Sphericity__425->SetBinContent(20,12);
   VbbHcc_algo_Sphericity__425->SetBinContent(21,8);
   VbbHcc_algo_Sphericity__425->SetBinContent(22,1);
   VbbHcc_algo_Sphericity__425->SetEntries(2097987);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity__425->SetLineColor(ci);
   VbbHcc_algo_Sphericity__425->SetLineWidth(2);
   VbbHcc_algo_Sphericity__425->SetMarkerStyle(20);
   VbbHcc_algo_Sphericity__425->SetMarkerSize(1.2);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity__425->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity__425->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity__425->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_Sphericity_fx1309[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fy1309[25] = {
   700625.9,
   640905.2,
   367293.5,
   193555.5,
   94876.32,
   47240.98,
   15437.95,
   4517.761,
   2070.914,
   1154.723,
   512.1844,
   567.6539,
   188.5726,
   124.0273,
   88.80804,
   94.91778,
   548.3527,
   43.10306,
   11.3863,
   15.70626,
   0.9027753,
   0.3093142,
   0.06584265,
   0,
   0};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fex1309[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_VbbHcc_algo_Sphericity_fey1309[25] = {
   12662.97,
   12492.45,
   23923.78,
   5881.612,
   4386.029,
   3436.726,
   2390.642,
   959.2937,
   569.1243,
   433.1568,
   101.0468,
   304.932,
   51.72444,
   35.53437,
   32.94881,
   35.78316,
   491.1403,
   16.51549,
   5.165678,
   8.899262,
   0.2472647,
   0.1424491,
   0.06584265,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_algo_Sphericity_fx1309,Graph_from_VbbHcc_algo_Sphericity_fy1309,Graph_from_VbbHcc_algo_Sphericity_fex1309,Graph_from_VbbHcc_algo_Sphericity_fey1309);
   gre->SetName("Graph_from_VbbHcc_algo_Sphericity");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_Sphericity1309 = new TH1F("Graph_Graph_from_VbbHcc_algo_Sphericity1309","",100,0,1.1);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetMinimum(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetMaximum(784617.8);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_Sphericity1309->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_Sphericity1309);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_Sphericity","MC unc. (stat.)","fl");

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
   Sphericity_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__426 = new TH1D("data_mc_ratio__426","",25,0,1);
   data_mc_ratio__426->SetBinContent(1,0.9930035);
   data_mc_ratio__426->SetBinContent(2,1.01298);
   data_mc_ratio__426->SetBinContent(3,1.015749);
   data_mc_ratio__426->SetBinContent(4,1.065518);
   data_mc_ratio__426->SetBinContent(5,1.092233);
   data_mc_ratio__426->SetBinContent(6,0.922991);
   data_mc_ratio__426->SetBinContent(7,0.9802465);
   data_mc_ratio__426->SetBinContent(8,1.201923);
   data_mc_ratio__426->SetBinContent(9,1.146354);
   data_mc_ratio__426->SetBinContent(10,1.113687);
   data_mc_ratio__426->SetBinContent(11,1.44284);
   data_mc_ratio__426->SetBinContent(12,0.8526322);
   data_mc_ratio__426->SetBinContent(13,1.749989);
   data_mc_ratio__426->SetBinContent(14,1.781866);
   data_mc_ratio__426->SetBinContent(15,1.948022);
   data_mc_ratio__426->SetBinContent(16,1.422284);
   data_mc_ratio__426->SetBinContent(17,0.1203605);
   data_mc_ratio__426->SetBinContent(18,1.299212);
   data_mc_ratio__426->SetBinContent(19,1.932146);
   data_mc_ratio__426->SetBinContent(20,0.7640267);
   data_mc_ratio__426->SetBinContent(21,8.861563);
   data_mc_ratio__426->SetBinContent(22,3.232959);
   data_mc_ratio__426->SetBinError(1,0.001190508);
   data_mc_ratio__426->SetBinError(2,0.001257197);
   data_mc_ratio__426->SetBinError(3,0.001662978);
   data_mc_ratio__426->SetBinError(4,0.002346268);
   data_mc_ratio__426->SetBinError(5,0.003392959);
   data_mc_ratio__426->SetBinError(6,0.004420173);
   data_mc_ratio__426->SetBinError(7,0.00796843);
   data_mc_ratio__426->SetBinError(8,0.01631085);
   data_mc_ratio__426->SetBinError(9,0.02352763);
   data_mc_ratio__426->SetBinError(10,0.03105579);
   data_mc_ratio__426->SetBinError(11,0.05307572);
   data_mc_ratio__426->SetBinError(12,0.03875601);
   data_mc_ratio__426->SetBinError(13,0.09633374);
   data_mc_ratio__426->SetBinError(14,0.1198613);
   data_mc_ratio__426->SetBinError(15,0.1481054);
   data_mc_ratio__426->SetBinError(16,0.1224107);
   data_mc_ratio__426->SetBinError(17,0.01481535);
   data_mc_ratio__426->SetBinError(18,0.1736145);
   data_mc_ratio__426->SetBinError(19,0.411935);
   data_mc_ratio__426->SetBinError(20,0.2205555);
   data_mc_ratio__426->SetBinError(21,3.133036);
   data_mc_ratio__426->SetBinError(22,3.232959);
   data_mc_ratio__426->SetMinimum(0.4);
   data_mc_ratio__426->SetMaximum(1.6);
   data_mc_ratio__426->SetEntries(40.55411);
   data_mc_ratio__426->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__426->SetLineColor(ci);
   data_mc_ratio__426->SetLineWidth(2);
   data_mc_ratio__426->SetMarkerStyle(20);
   data_mc_ratio__426->SetMarkerSize(1.2);
   data_mc_ratio__426->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__426->GetXaxis()->SetRange(1,25);
   data_mc_ratio__426->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__426->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__426->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__426->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__426->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__426->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__426->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__426->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__426->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1310[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1310[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1310[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1310[25] = {
   0.0180738,
   0.01949188,
   0.06513533,
   0.0303872,
   0.04622892,
   0.07274883,
   0.1548549,
   0.2123383,
   0.2748179,
   0.3751175,
   0.1972859,
   0.5371794,
   0.2742946,
   0.2865045,
   0.3710116,
   0.3769911,
   0.8956651,
   0.3831628,
   0.4536748,
   0.5666061,
   0.273894,
   0.4605321,
   1,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1310,Graph_from_mc_statistical_error_fy1310,Graph_from_mc_statistical_error_fex1310,Graph_from_mc_statistical_error_fey1310);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1310 = new TH1F("Graph_Graph_from_mc_statistical_error1310","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1310->SetMinimum(1.998401e-16);
   Graph_Graph_from_mc_statistical_error1310->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1310->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1310->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1310->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1310->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1310->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1310);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
