void Z_dR_VbbHcc_all()
{
//=========Macro generated from canvas: Z_dR_VbbHcc_all/Z_dR_VbbHcc_all
//=========  (Tue Nov 22 09:17:14 2022) by ROOT version 6.14/09
   TCanvas *Z_dR_VbbHcc_all = new TCanvas("Z_dR_VbbHcc_all", "Z_dR_VbbHcc_all",0,0,600,600);
   Z_dR_VbbHcc_all->SetHighLightColor(2);
   Z_dR_VbbHcc_all->Range(0,0,1,1);
   Z_dR_VbbHcc_all->SetFillColor(0);
   Z_dR_VbbHcc_all->SetFillStyle(4000);
   Z_dR_VbbHcc_all->SetBorderMode(0);
   Z_dR_VbbHcc_all->SetBorderSize(2);
   Z_dR_VbbHcc_all->SetFrameFillStyle(1000);
   Z_dR_VbbHcc_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-11965.34,10.52419,1.195368e+07);
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
   st->SetMaximum(1.024487e+07);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",50,0,10);
   st_stack_20->SetMinimum(0.3);
   st_stack_20->SetMaximum(1.075711e+07);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetRange(1,50);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetLabelSize(0.035);
   st_stack_20->GetXaxis()->SetTitleSize(0.035);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetLabelSize(0.05);
   st_stack_20->GetYaxis()->SetTitleSize(0.057);
   st_stack_20->GetYaxis()->SetTitleOffset(1.2);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetLabelSize(0.035);
   st_stack_20->GetZaxis()->SetTitleSize(0.035);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_1 = new TH1D("VbbHcc_duong_Z_dR_all_stack_1","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(3,3052207);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(4,4284934);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(5,3182436);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(6,2946459);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(7,2538712);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(8,2435150);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(9,2406237);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(10,2476773);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(11,2393683);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(12,2655665);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(13,2937880);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(14,3123792);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(15,3560291);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(16,3745650);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(17,2299698);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(18,1402323);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(19,1078327);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(20,695400.7);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(21,550268);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(22,329927.3);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(23,253971);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(24,189662);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(25,87577.82);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(26,62000.43);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(27,21784.84);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinContent(28,10146.45);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(3,64334.8);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(4,75873.26);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(5,65454.18);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(6,62962.33);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(7,58513.03);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(8,57292.15);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(9,56848.37);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(10,57733.01);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(11,56597.74);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(12,59740.59);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(13,62867.41);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(14,64730.7);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(15,69196.22);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(16,70871.23);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(17,55420.73);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(18,43476.52);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(19,37998.29);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(20,30416.64);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(21,27084.98);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(22,20999.89);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(23,18251.58);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(24,15860.95);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(25,10810.31);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(26,9027.788);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(27,5369.274);
   VbbHcc_duong_Z_dR_all_stack_1->SetBinError(28,3568.195);
   VbbHcc_duong_Z_dR_all_stack_1->SetEntries(37535);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_duong_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_2 = new TH1D("VbbHcc_duong_Z_dR_all_stack_2","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(2,6.828713);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(3,8200.54);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(4,15386.07);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(5,18116.02);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(6,21999.46);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(7,25904.79);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(8,29344.13);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(9,32727.67);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(10,35906.96);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(11,39277.88);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(12,42714.84);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(13,45632.79);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(14,48719.27);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(15,50939.41);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(16,49554.41);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(17,27344.03);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(18,16681.24);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(19,10787.8);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(20,6979.736);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(21,4528.557);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(22,2794.202);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(23,1676.687);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(24,952.0873);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(25,467.8122);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(26,206.9461);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(27,80.08403);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(28,21.64261);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinContent(29,0.8810592);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(2,1.152476);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(3,36.90386);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(4,50.08463);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(5,54.47511);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(6,60.08352);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(7,65.31034);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(8,69.29462);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(9,73.36006);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(10,76.62179);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(11,80.16308);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(12,83.56279);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(13,86.28952);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(14,89.39073);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(15,91.26475);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(16,90.30822);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(17,68.16727);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(18,54.0117);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(19,43.79461);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(20,35.35055);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(21,28.66231);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(22,22.55944);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(23,17.44942);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(24,13.11163);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(25,9.102887);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(26,5.846461);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(27,3.618657);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(28,1.899149);
   VbbHcc_duong_Z_dR_all_stack_2->SetBinError(29,0.3648686);
   VbbHcc_duong_Z_dR_all_stack_2->SetEntries(7739056);

   ci = TColor::GetColor("#660066");
   VbbHcc_duong_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_2,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_3 = new TH1D("VbbHcc_duong_Z_dR_all_stack_3","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(2,78.24315);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(3,110302.6);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(4,216227.8);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(5,258489.5);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(6,315033.5);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(7,368178.9);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(8,418126.3);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(9,467578);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(10,518644.5);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(11,572127.4);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(12,630466.6);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(13,692067.4);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(14,752599.1);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(15,807540.5);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(16,791261.2);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(17,415482.3);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(18,236874.6);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(19,140335.2);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(20,82779.05);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(21,47798.64);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(22,26932.24);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(23,14474.69);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(24,7397.547);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(25,3468.343);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(26,1447.894);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(27,491.0216);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(28,114.8134);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinContent(29,5.018422);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(2,2.294609);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(3,86.63492);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(4,121.5719);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(5,133.0425);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(6,146.9191);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(7,158.8799);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(8,169.3408);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(9,179.0992);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(10,188.6622);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(11,198.2159);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(12,208.1756);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(13,218.2129);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(14,227.7291);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(15,236.0389);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(16,233.8063);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(17,169.4495);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(18,127.913);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(19,98.43846);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(20,75.56166);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(21,57.37154);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(22,42.96706);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(23,31.43334);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(24,22.36331);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(25,15.298);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(26,9.843262);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(27,5.679413);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(28,2.724041);
   VbbHcc_duong_Z_dR_all_stack_3->SetBinError(29,0.5581055);
   VbbHcc_duong_Z_dR_all_stack_3->SetEntries(1.244387e+08);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_duong_Z_dR_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_3->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_3,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_4 = new TH1D("VbbHcc_duong_Z_dR_all_stack_4","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(2,3.52465);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(3,3802.763);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(4,9888.044);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(5,14645.81);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(6,14360.52);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(7,11550.26);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(8,9361.405);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(9,7960.729);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(10,6917.223);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(11,6573.995);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(12,6611.179);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(13,6754.27);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(14,7261.824);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(15,7784.453);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(16,7514.472);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(17,3941.888);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(18,2453.346);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(19,1705.35);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(20,1163.85);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(21,831.0038);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(22,527.6042);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(23,347.9355);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(24,209.6649);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(25,109.3874);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(26,55.73383);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(27,28.93249);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinContent(28,7.436276);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(2,1.0693);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(3,35.83766);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(4,57.76575);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(5,70.20452);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(6,69.55026);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(7,62.35942);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(8,56.11476);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(9,51.77881);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(10,48.25852);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(11,47.07615);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(12,47.22301);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(13,47.64849);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(14,49.45859);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(15,51.14138);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(16,50.30354);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(17,36.35823);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(18,28.74568);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(19,23.89571);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(20,19.80783);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(21,16.67835);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(22,13.25821);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(23,10.69596);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(24,8.257138);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(25,5.958845);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(26,4.204824);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(27,2.966986);
   VbbHcc_duong_Z_dR_all_stack_4->SetBinError(28,1.716194);
   VbbHcc_duong_Z_dR_all_stack_4->SetEntries(412356);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_duong_Z_dR_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_4->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_4,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_5 = new TH1D("VbbHcc_duong_Z_dR_all_stack_5","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(2,6.301682);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(3,6510.083);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(4,7177.898);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(5,5093.216);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(6,4203.936);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(7,3708.091);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(8,3494.811);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(9,3436.832);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(10,3603.985);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(11,3710.834);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(12,4080.567);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(13,4599.393);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(14,5093.458);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(15,5589.255);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(16,5648.2);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(17,3188.527);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(18,2221.077);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(19,1550.968);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(20,1143.217);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(21,760.4007);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(22,554.3965);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(23,355.9553);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(24,208.2556);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(25,142.4783);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(26,71.41417);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(27,33.07381);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinContent(28,5.88515);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(2,2.921052);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(3,88.40635);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(4,92.76047);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(5,78.07488);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(6,70.98729);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(7,66.71938);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(8,64.57593);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(9,63.84865);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(10,65.57107);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(11,66.70444);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(12,69.83947);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(13,73.99798);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(14,77.94611);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(15,81.88813);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(16,82.29532);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(17,61.76896);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(18,51.43819);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(19,42.9721);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(20,36.74952);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(21,29.89883);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(22,25.32897);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(23,20.36847);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(24,15.46025);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(25,12.67484);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(26,8.918682);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(27,5.996074);
   VbbHcc_duong_Z_dR_all_stack_5->SetBinError(28,2.645498);
   VbbHcc_duong_Z_dR_all_stack_5->SetEntries(66594);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_duong_Z_dR_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_5->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_5,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_6 = new TH1D("VbbHcc_duong_Z_dR_all_stack_6","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(3,107.8999);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(4,113.5603);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(5,101.2246);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(6,104.5592);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(7,98.02352);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(8,109.0039);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(9,107.8932);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(10,137.464);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(11,133.3826);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(12,155.9823);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(13,178.7836);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(14,193.1655);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(15,210.7723);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(16,224.8388);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(17,126.3953);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(18,80.26155);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(19,54.43371);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(20,42.44662);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(21,26.49409);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(22,25.61866);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(23,11.40288);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(24,9.428954);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(25,4.921991);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(26,1.202191);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinContent(27,0.7882069);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(3,3.995678);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(4,4.166669);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(5,3.905533);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(6,4.032945);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(7,3.87785);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(8,4.15351);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(9,4.10567);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(10,4.716755);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(11,4.653546);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(12,4.970563);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(13,5.292973);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(14,5.581009);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(15,5.695459);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(16,5.93002);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(17,4.471044);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(18,3.549598);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(19,2.880667);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(20,2.607335);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(21,2.024051);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(22,2.029598);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(23,1.352456);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(24,1.316051);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(25,0.8707186);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(26,0.379957);
   VbbHcc_duong_Z_dR_all_stack_6->SetBinError(27,0.2650259);
   VbbHcc_duong_Z_dR_all_stack_6->SetEntries(19122);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_duong_Z_dR_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_6->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_6,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_7 = new TH1D("VbbHcc_duong_Z_dR_all_stack_7","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(2,0.3139038);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(3,180.6397);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(4,306.241);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(5,330.9067);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(6,372.1185);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(7,395.0548);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(8,368.7638);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(9,332.3418);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(10,294.3807);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(11,270.9432);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(12,262.8574);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(13,250.3415);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(14,260.9714);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(15,278.846);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(16,264.4371);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(17,121.0994);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(18,63.97867);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(19,42.2094);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(20,30.14746);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(21,17.07607);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(22,13.04709);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(23,9.674736);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(24,5.148853);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(25,3.612664);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(26,1.543982);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(27,0.4594143);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(28,0.1334389);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinContent(29,0.09975579);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(2,0.2035079);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(3,4.477842);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(4,5.798806);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(5,6.048541);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(6,6.378346);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(7,6.621343);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(8,6.416859);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(9,6.089047);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(10,5.760723);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(11,5.569406);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(12,5.520176);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(13,5.397217);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(14,5.441467);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(15,5.704621);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(16,5.469634);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(17,3.695687);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(18,2.643627);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(19,2.190638);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(20,1.877311);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(21,1.355796);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(22,1.194008);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(23,1.032086);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(24,0.7666602);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(25,0.7033075);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(26,0.3805568);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(27,0.1917634);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(28,0.09435555);
   VbbHcc_duong_Z_dR_all_stack_7->SetBinError(29,0.07053799);
   VbbHcc_duong_Z_dR_all_stack_7->SetEntries(49668);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_duong_Z_dR_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_7->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_7,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_8 = new TH1D("VbbHcc_duong_Z_dR_all_stack_8","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(3,120.4592);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(4,238.6072);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(5,280.497);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(6,325.3172);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(7,319.7431);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(8,320.7697);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(9,316.9319);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(10,304.5466);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(11,291.0521);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(12,286.1387);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(13,291.0701);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(14,315.1543);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(15,341.4794);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(16,310.728);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(17,115.7163);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(18,57.89429);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(19,32.34026);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(20,26.3451);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(21,14.54464);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(22,6.900372);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(23,8.310767);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(24,2.620042);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(25,1.370366);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(26,0.8611173);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinContent(27,0.2802145);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(3,4.922522);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(4,6.961637);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(5,7.51332);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(6,8.143946);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(7,8.078178);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(8,8.07667);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(9,8.018485);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(10,7.861521);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(11,7.710008);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(12,7.631309);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(13,7.72962);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(14,8.032708);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(15,8.34952);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(16,7.950735);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(17,4.840312);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(18,3.422196);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(19,2.576312);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(20,2.283281);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(21,1.69674);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(22,1.169393);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(23,1.297127);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(24,0.7339044);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(25,0.5201335);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(26,0.3921516);
   VbbHcc_duong_Z_dR_all_stack_8->SetBinError(27,0.1981415);
   VbbHcc_duong_Z_dR_all_stack_8->SetEntries(22006);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_duong_Z_dR_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_8->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_8,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_9 = new TH1D("VbbHcc_duong_Z_dR_all_stack_9","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(2,0.03022714);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(3,29.17879);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(4,65.50916);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(5,87.70488);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(6,108.5);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(7,121.9065);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(8,126.1767);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(9,125.7929);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(10,122.4322);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(11,118.4682);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(12,115.2503);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(13,115.1424);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(14,120.1269);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(15,126.5837);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(16,120.0488);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(17,39.51579);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(18,14.4094);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(19,6.509875);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(20,3.266533);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(21,1.993111);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(22,1.29795);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(23,0.7277058);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(24,0.4017745);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(25,0.1925488);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(26,0.1115594);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(27,0.03168386);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinContent(28,0.02346818);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(2,0.007006079);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(3,0.2200163);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(4,0.3313182);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(5,0.3836627);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(6,0.4264955);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(7,0.4526783);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(8,0.4609786);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(9,0.4603928);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(10,0.4543378);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(11,0.4465268);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(12,0.4405675);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(13,0.4399772);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(14,0.4491596);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(15,0.4613076);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(16,0.4491307);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(17,0.2572508);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(18,0.1545352);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(19,0.1036833);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(20,0.07308469);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(21,0.05695003);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(22,0.04614772);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(23,0.03418431);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(24,0.0254828);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(25,0.01790581);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(26,0.01315031);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(27,0.007491486);
   VbbHcc_duong_Z_dR_all_stack_9->SetBinError(28,0.006020684);
   VbbHcc_duong_Z_dR_all_stack_9->SetEntries(1020933);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_duong_Z_dR_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_9->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_9,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_10 = new TH1D("VbbHcc_duong_Z_dR_all_stack_10","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(2,0.01367157);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(3,13.64891);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(4,28.69139);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(5,38.97762);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(6,47.95927);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(7,50.89835);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(8,47.40083);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(9,39.53318);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(10,32.16429);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(11,27.69963);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(12,25.39819);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(13,25.49424);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(14,26.34757);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(15,27.88669);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(16,26.51409);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(17,10.75728);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(18,4.963741);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(19,2.509796);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(20,1.375965);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(21,0.8206843);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(22,0.4427474);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(23,0.2450257);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(24,0.1331292);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(25,0.06702286);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(26,0.01511421);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(27,0.01246346);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinContent(28,0.003451795);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(2,0.002391605);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(3,0.07418088);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(4,0.1075299);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(5,0.1254973);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(6,0.1393005);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(7,0.1436638);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(8,0.1386747);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(9,0.1266494);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(10,0.1142351);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(11,0.1059563);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(12,0.1014612);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(13,0.10161);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(14,0.103306);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(15,0.1062973);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(16,0.1036973);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(17,0.06593662);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(18,0.04476613);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(19,0.03182547);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(20,0.02349363);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(21,0.01812421);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(22,0.01327593);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(23,0.009878517);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(24,0.007262179);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(25,0.005085408);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(26,0.002440953);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(27,0.002184897);
   VbbHcc_duong_Z_dR_all_stack_10->SetBinError(28,0.001160766);
   VbbHcc_duong_Z_dR_all_stack_10->SetEntries(1213185);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_duong_Z_dR_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_10->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_10,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_11 = new TH1D("VbbHcc_duong_Z_dR_all_stack_11","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(3,0.8784583);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(4,1.496004);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(5,2.068015);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(6,2.338134);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(7,2.212166);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(8,2.132259);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(9,1.955866);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(10,1.62841);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(11,1.576379);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(12,1.650172);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(13,1.627388);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(14,1.705549);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(15,1.681181);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(16,1.646157);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(17,0.6299904);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(18,0.3120587);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(19,0.1348671);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(20,0.09946292);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(21,0.0366709);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(22,0.04315243);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(23,0.01062894);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(24,0.012242);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(25,0.01117555);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinContent(26,0.002986568);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(3,0.03810869);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(4,0.04982115);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(5,0.05889753);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(6,0.06274909);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(7,0.06082293);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(8,0.05969028);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(9,0.05724805);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(10,0.05270748);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(11,0.05129826);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(12,0.05259245);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(13,0.05241618);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(14,0.05296986);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(15,0.05237847);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(16,0.05255827);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(17,0.03218604);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(18,0.02270759);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(19,0.01447392);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(20,0.01284081);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(21,0.007582784);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(22,0.007989262);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(23,0.00427903);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(24,0.004406877);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(25,0.00425206);
   VbbHcc_duong_Z_dR_all_stack_11->SetBinError(26,0.002111822);
   VbbHcc_duong_Z_dR_all_stack_11->SetEntries(18245);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_duong_Z_dR_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_11->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_11,"");
   
   TH1D *VbbHcc_duong_Z_dR_all_stack_12 = new TH1D("VbbHcc_duong_Z_dR_all_stack_12","",50,0,10);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(2,7.738589);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(3,8652.866);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(4,16157.99);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(5,22076.88);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(6,23561.94);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(7,19114.05);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(8,13907.16);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(9,10387.55);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(10,8945.875);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(11,8221.429);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(12,8533.556);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(13,8541.232);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(14,9060.786);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(15,9522.307);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(16,9614.466);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(17,4495.687);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(18,2473.372);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(19,1527.188);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(20,985.9297);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(21,590.6908);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(22,310.2461);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(23,254.6607);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(24,91.43877);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(25,35.26414);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(26,6.707303);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(27,11.11381);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinContent(29,7.81923);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(2,5.472009);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(3,194.0817);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(4,266.4487);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(5,314.0435);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(6,324.8908);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(7,293.5085);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(8,249.4705);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(9,214.9655);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(10,199.2721);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(11,191.1603);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(12,194.3846);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(13,193.977);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(14,200.5263);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(15,205.0648);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(16,205.4632);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(17,141.2429);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(18,104.2808);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(19,82.61317);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(20,64.5566);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(21,51.12822);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(22,36.26437);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(23,32.34002);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(24,19.84166);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(25,11.9874);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(26,5.146529);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(27,6.78772);
   VbbHcc_duong_Z_dR_all_stack_12->SetBinError(29,5.529031);
   VbbHcc_duong_Z_dR_all_stack_12->SetEntries(47321);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_duong_Z_dR_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all_stack_12->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_duong_Z_dR_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_duong_Z_dR_all__39 = new TH1D("VbbHcc_duong_Z_dR_all__39","",50,0,10);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(2,1380);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(3,1743153);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(4,1847642);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(5,1300974);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(6,1146027);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(7,1063467);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(8,1015977);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(9,1005613);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(10,1019451);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(11,1056039);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(12,1120133);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(13,1203780);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(14,1318901);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(15,1453103);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(16,1497708);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(17,893554);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(18,583960);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(19,398538);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(20,275160);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(21,185721);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(22,122806);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(23,78386);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(24,46426);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(25,25112);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(26,12065);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(27,4987);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(28,1328);
   VbbHcc_duong_Z_dR_all__39->SetBinContent(29,68);
   VbbHcc_duong_Z_dR_all__39->SetEntries(2.042146e+07);

   ci = TColor::GetColor("#000099");
   VbbHcc_duong_Z_dR_all__39->SetLineColor(ci);
   VbbHcc_duong_Z_dR_all__39->SetLineWidth(2);
   VbbHcc_duong_Z_dR_all__39->SetMarkerStyle(20);
   VbbHcc_duong_Z_dR_all__39->SetMarkerSize(1.2);
   VbbHcc_duong_Z_dR_all__39->GetXaxis()->SetRange(1,100);
   VbbHcc_duong_Z_dR_all__39->GetXaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all__39->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all__39->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all__39->GetXaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all__39->GetYaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all__39->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all__39->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all__39->GetYaxis()->SetTitleOffset(0);
   VbbHcc_duong_Z_dR_all__39->GetYaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all__39->GetZaxis()->SetLabelFont(42);
   VbbHcc_duong_Z_dR_all__39->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_duong_Z_dR_all__39->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_duong_Z_dR_all__39->GetZaxis()->SetTitleFont(42);
   VbbHcc_duong_Z_dR_all__39->Draw("same E");
   
   Double_t Graph_from_VbbHcc_duong_Z_dR_all_fx1039[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_VbbHcc_duong_Z_dR_all_fy1039[50] = {
   0,
   102.9946,
   3190129,
   4550525,
   3501699,
   3326579,
   2968156,
   2910358,
   2929253,
   3051684,
   3024438,
   3348919,
   3696337,
   3947444,
   4442655,
   4610191,
   2754565,
   1663249,
   1234372,
   788556.1,
   604838.3,
   361093.4,
   271111.4,
   198538.7,
   91811.28,
   63792.87,
   22430.64,
   10296.39,
   13.81847,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_VbbHcc_duong_Z_dR_all_fex1039[50] = {
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
   Double_t Graph_from_VbbHcc_duong_Z_dR_all_fey1039[50] = {
   0,
   6.801009,
   64335.23,
   75873.92,
   65455.18,
   62963.44,
   58514.09,
   57293.05,
   56849.17,
   57733.77,
   56598.52,
   59741.39,
   62868.21,
   64731.54,
   69197.05,
   70872.04,
   55421.25,
   43476.91,
   37998.56,
   30416.85,
   27085.12,
   21000,
   18251.66,
   15860.99,
   10810.34,
   9027.802,
   5369.287,
   3568.198,
   5.569539,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_VbbHcc_duong_Z_dR_all_fx1039,Graph_from_VbbHcc_duong_Z_dR_all_fy1039,Graph_from_VbbHcc_duong_Z_dR_all_fex1039,Graph_from_VbbHcc_duong_Z_dR_all_fey1039);
   gre->SetName("Graph_from_VbbHcc_duong_Z_dR_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_duong_Z_dR_all1039 = new TH1F("Graph_Graph_from_VbbHcc_duong_Z_dR_all1039","",100,0,11);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->SetMinimum(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->SetMaximum(5149169);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->SetDirectory(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_duong_Z_dR_all1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_duong_Z_dR_all1039);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_duong_Z_dR_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_duong_Z_dR_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_duong_Z_dR_all","MC unc. (stat.)","fl");

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
   Z_dR_VbbHcc_all->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__40 = new TH1D("data_mc_ratio__40","",50,0,10);
   data_mc_ratio__40->SetBinContent(2,13.39876);
   data_mc_ratio__40->SetBinContent(3,0.5464209);
   data_mc_ratio__40->SetBinContent(4,0.4060283);
   data_mc_ratio__40->SetBinContent(5,0.3715265);
   data_mc_ratio__40->SetBinContent(6,0.3445061);
   data_mc_ratio__40->SetBinContent(7,0.3582921);
   data_mc_ratio__40->SetBinContent(8,0.34909);
   data_mc_ratio__40->SetBinContent(9,0.3433002);
   data_mc_ratio__40->SetBinContent(10,0.3340617);
   data_mc_ratio__40->SetBinContent(11,0.3491687);
   data_mc_ratio__40->SetBinContent(12,0.334476);
   data_mc_ratio__40->SetBinContent(13,0.3256683);
   data_mc_ratio__40->SetBinContent(14,0.3341152);
   data_mc_ratio__40->SetBinContent(15,0.3270799);
   data_mc_ratio__40->SetBinContent(16,0.324869);
   data_mc_ratio__40->SetBinContent(17,0.3243903);
   data_mc_ratio__40->SetBinContent(18,0.351096);
   data_mc_ratio__40->SetBinContent(19,0.3228671);
   data_mc_ratio__40->SetBinContent(20,0.3489415);
   data_mc_ratio__40->SetBinContent(21,0.3070589);
   data_mc_ratio__40->SetBinContent(22,0.3400949);
   data_mc_ratio__40->SetBinContent(23,0.2891284);
   data_mc_ratio__40->SetBinContent(24,0.2338385);
   data_mc_ratio__40->SetBinContent(25,0.2735176);
   data_mc_ratio__40->SetBinContent(26,0.1891277);
   data_mc_ratio__40->SetBinContent(27,0.2223298);
   data_mc_ratio__40->SetBinContent(28,0.1289772);
   data_mc_ratio__40->SetBinContent(29,4.920951);
   data_mc_ratio__40->SetBinError(2,0.3606826);
   data_mc_ratio__40->SetBinError(3,0.0004138658);
   data_mc_ratio__40->SetBinError(4,0.0002987083);
   data_mc_ratio__40->SetBinError(5,0.0003257283);
   data_mc_ratio__40->SetBinError(6,0.00032181);
   data_mc_ratio__40->SetBinError(7,0.0003474363);
   data_mc_ratio__40->SetBinError(8,0.0003463343);
   data_mc_ratio__40->SetBinError(9,0.0003423408);
   data_mc_ratio__40->SetBinError(10,0.0003308595);
   data_mc_ratio__40->SetBinError(11,0.000339778);
   data_mc_ratio__40->SetBinError(12,0.0003160313);
   data_mc_ratio__40->SetBinError(13,0.000296826);
   data_mc_ratio__40->SetBinError(14,0.0002909311);
   data_mc_ratio__40->SetBinError(15,0.0002713349);
   data_mc_ratio__40->SetBinError(16,0.0002654573);
   data_mc_ratio__40->SetBinError(17,0.0003431685);
   data_mc_ratio__40->SetBinError(18,0.0004594458);
   data_mc_ratio__40->SetBinError(19,0.0005114332);
   data_mc_ratio__40->SetBinError(20,0.0006652119);
   data_mc_ratio__40->SetBinError(21,0.0007125105);
   data_mc_ratio__40->SetBinError(22,0.0009704883);
   data_mc_ratio__40->SetBinError(23,0.001032694);
   data_mc_ratio__40->SetBinError(24,0.001085264);
   data_mc_ratio__40->SetBinError(25,0.001726015);
   data_mc_ratio__40->SetBinError(26,0.001721835);
   data_mc_ratio__40->SetBinError(27,0.003148314);
   data_mc_ratio__40->SetBinError(28,0.003539273);
   data_mc_ratio__40->SetBinError(29,0.596753);
   data_mc_ratio__40->SetMinimum(0.4);
   data_mc_ratio__40->SetMaximum(1.6);
   data_mc_ratio__40->SetEntries(136.7805);
   data_mc_ratio__40->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__40->SetLineColor(ci);
   data_mc_ratio__40->SetLineWidth(2);
   data_mc_ratio__40->SetMarkerStyle(20);
   data_mc_ratio__40->SetMarkerSize(1.2);
   data_mc_ratio__40->GetXaxis()->SetTitle("#DeltaR(b,b)");
   data_mc_ratio__40->GetXaxis()->SetRange(1,50);
   data_mc_ratio__40->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__40->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__40->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__40->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__40->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__40->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__40->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__40->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1040[50] = {
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
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1040[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1040[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1040[50] = {
   0,
   0.06603269,
   0.02016697,
   0.01667366,
   0.01869241,
   0.01892738,
   0.01971395,
   0.01968591,
   0.0194074,
   0.01891866,
   0.01871373,
   0.017839,
   0.01700824,
   0.01639834,
   0.01557561,
   0.01537291,
   0.02011979,
   0.02613975,
   0.03078373,
   0.03857284,
   0.04478077,
   0.0581567,
   0.06732164,
   0.07988866,
   0.1177452,
   0.1415174,
   0.2393728,
   0.3465485,
   0.4030504,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",100,0,11);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.5163395);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.483661);
   Graph_Graph_from_mc_statistical_error1040->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1040->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1040);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Z_dR_VbbHcc_all->cd();
   Z_dR_VbbHcc_all->Modified();
   Z_dR_VbbHcc_all->cd();
   Z_dR_VbbHcc_all->SetSelected(Z_dR_VbbHcc_all);
}
