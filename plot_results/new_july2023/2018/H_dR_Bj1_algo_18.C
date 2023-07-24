void H_dR_Bj1_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_18/H_dR_Bj1_algo_18
//=========  (Mon Jul 24 10:11:49 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_algo_18 = new TCanvas("H_dR_Bj1_algo_18", "H_dR_Bj1_algo_18",0,0,600,600);
   H_dR_Bj1_algo_18->SetHighLightColor(2);
   H_dR_Bj1_algo_18->Range(0,0,1,1);
   H_dR_Bj1_algo_18->SetFillColor(0);
   H_dR_Bj1_algo_18->SetFillStyle(4000);
   H_dR_Bj1_algo_18->SetBorderMode(0);
   H_dR_Bj1_algo_18->SetBorderSize(2);
   H_dR_Bj1_algo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_algo_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-58.04301,6.314516,57994.97);
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
   st->SetMaximum(49704.44);
   
   TH1F *st_stack_143 = new TH1F("st_stack_143","",30,0,6);
   st_stack_143->SetMinimum(0.01);
   st_stack_143->SetMaximum(52189.67);
   st_stack_143->SetDirectory(0);
   st_stack_143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_143->SetLineColor(ci);
   st_stack_143->GetXaxis()->SetRange(1,30);
   st_stack_143->GetXaxis()->SetLabelFont(42);
   st_stack_143->GetXaxis()->SetLabelSize(0.035);
   st_stack_143->GetXaxis()->SetTitleSize(0.035);
   st_stack_143->GetXaxis()->SetTitleFont(42);
   st_stack_143->GetYaxis()->SetTitle("Events/0.2");
   st_stack_143->GetYaxis()->SetLabelFont(42);
   st_stack_143->GetYaxis()->SetLabelSize(0.05);
   st_stack_143->GetYaxis()->SetTitleSize(0.057);
   st_stack_143->GetYaxis()->SetTitleOffset(1.2);
   st_stack_143->GetYaxis()->SetTitleFont(42);
   st_stack_143->GetZaxis()->SetLabelFont(42);
   st_stack_143->GetZaxis()->SetLabelSize(0.035);
   st_stack_143->GetZaxis()->SetTitleSize(0.035);
   st_stack_143->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_143);
   
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(2,10369.23);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(3,16966.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(4,14279.32);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(5,11157.96);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(6,11527.53);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(7,10150.67);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(8,10898.4);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(9,10599.37);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(10,7941.251);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(11,7906.205);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(12,8070.636);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(13,7757.422);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(14,8600.184);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(15,8394.869);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(16,6615.233);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(17,6495.449);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(18,5919.454);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(19,4089.534);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(20,4032.068);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(21,2655.258);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(22,4278.759);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(23,2919.218);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(24,1159.817);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(25,813.8254);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(26,723.7652);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(27,457.8146);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(28,338.859);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(29,135.9351);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(30,56.53909);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinContent(31,70.98328);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(2,1413.501);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(3,1670.612);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(4,2188.727);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(5,1247.893);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(6,1335.615);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(7,1147.48);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(8,1290.768);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(9,1101.143);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(10,845.1597);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(11,905.896);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(12,1021.08);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(13,962.2936);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(14,1854.919);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(15,1077.951);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(16,889.9184);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(17,1003.714);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(18,943.1065);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(19,638.5679);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(20,722.4721);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(21,400.8049);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(22,929.7911);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(23,783.5516);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(24,146.9138);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(25,123.0317);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(26,112.0702);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(27,85.64486);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(28,74.1194);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(29,42.77398);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(30,23.04248);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetBinError(31,26.01256);
   VbbHcc_algo_H_dR_Bj1_stack_1->SetEntries(13324);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(1,0.05123843);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(2,61.7999);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(3,100.3862);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(4,74.78482);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(5,84.65041);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(6,102.4633);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(7,103.5805);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(8,115.0681);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(9,118.7973);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(10,107.0851);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(11,109.5826);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(12,94.17681);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(13,102.0185);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(14,89.43067);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(15,81.256);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(16,71.68426);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(17,68.07533);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(18,53.41873);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(19,48.494);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(20,42.33623);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(21,33.98013);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(22,24.39014);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(23,17.87602);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(24,15.38826);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(25,11.62951);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(26,9.928358);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(27,4.401087);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(28,3.596086);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(29,1.553737);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(30,1.344632);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinContent(31,1.281846);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(1,0.05123843);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(2,3.747713);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(3,4.521416);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(4,3.653379);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(5,3.533949);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(6,3.859923);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(7,3.776059);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(8,4.113554);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(9,4.17668);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(10,3.947657);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(11,3.951461);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(12,3.503619);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(13,3.782263);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(14,3.463799);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(15,3.224587);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(16,2.886184);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(17,2.873974);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(18,2.550324);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(19,2.503306);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(20,2.333306);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(21,2.0854);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(22,1.727998);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(23,1.451425);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(24,1.42127);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(25,1.258024);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(26,1.173125);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(27,0.7341326);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(28,0.6615899);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(29,0.3761233);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(30,0.4411471);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetBinError(31,0.3558228);
   VbbHcc_algo_H_dR_Bj1_stack_2->SetEntries(21685);

   ci = TColor::GetColor("#660066");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_2,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_3 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_3","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(1,1.549802);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(2,680.0979);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(3,1526.936);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(4,1466.096);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(5,1454.77);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(6,1388.262);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(7,1283.258);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(8,1180.692);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(9,1090.409);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(10,997.2336);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(11,904.4539);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(12,819.8661);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(13,761.7368);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(14,711.5777);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(15,660.1987);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(16,629.9177);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(17,548.3637);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(18,469.7518);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(19,408.332);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(20,342.0998);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(21,276.615);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(22,228.5484);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(23,177.7117);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(24,142.2642);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(25,102.1774);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(26,72.78122);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(27,46.83635);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(28,31.71043);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(29,16.04064);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(30,10.74286);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinContent(31,13.26574);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(1,0.2841771);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(2,6.322875);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(3,9.574464);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(4,9.445841);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(5,9.418496);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(6,9.171541);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(7,8.7881);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(8,8.422861);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(9,8.087122);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(10,7.721703);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(11,7.351103);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(12,7.003599);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(13,6.747165);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(14,6.513432);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(15,6.279788);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(16,6.142794);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(17,5.73136);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(18,5.305304);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(19,4.944345);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(20,4.513165);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(21,4.055854);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(22,3.683463);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(23,3.254424);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(24,2.910967);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(25,2.456702);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(26,2.073516);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(27,1.654975);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(28,1.363739);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(29,0.9583291);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(30,0.7909758);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetBinError(31,0.8663006);
   VbbHcc_algo_H_dR_Bj1_stack_3->SetEntries(319331);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_3->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_3,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_4 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_4","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(2,72.14066);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(3,147.7438);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(4,128.7163);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(5,124.7645);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(6,108.4546);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(7,100.9997);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(8,99.37856);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(9,85.68017);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(10,67.62071);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(11,69.41666);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(12,68.62486);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(13,56.66197);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(14,55.79676);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(15,60.35893);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(16,55.2144);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(17,43.0214);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(18,36.99992);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(19,39.56254);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(20,28.90852);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(21,20.64546);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(22,29.25611);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(23,15.68658);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(24,11.23417);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(25,11.11565);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(26,7.131386);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(27,5.636133);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(28,4.419208);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(29,1.766396);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(30,1.044932);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinContent(31,1.230544);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(2,7.201263);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(3,7.827683);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(4,9.326294);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(5,9.249131);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(6,8.867347);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(7,6.873856);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(8,7.801159);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(9,6.234636);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(10,4.093333);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(11,4.520811);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(12,5.750628);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(13,3.887168);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(14,5.493026);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(15,6.84352);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(16,5.606187);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(17,5.000881);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(18,3.097128);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(19,7.498172);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(20,2.786986);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(21,2.549708);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(22,7.297288);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(23,2.086099);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(24,1.76537);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(25,4.225655);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(26,1.441762);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(27,1.383907);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(28,1.108163);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(29,0.6153808);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(30,0.5394653);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetBinError(31,0.714737);
   VbbHcc_algo_H_dR_Bj1_stack_4->SetEntries(8300);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_4->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_4,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_5 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_5","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(2,49.2789);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(3,88.12319);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(4,63.46419);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(5,52.03278);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(6,45.93382);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(7,71.82939);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(8,48.25262);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(9,32.79481);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(10,38.67468);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(11,45.83124);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(12,48.49627);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(13,29.01925);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(14,21.47382);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(15,36.69583);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(16,22.12518);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(17,20.52387);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(18,16.07553);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(19,11.45505);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(20,11.8855);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(21,8.857186);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(22,6.914024);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(23,3.718668);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(24,6.343232);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(25,3.691702);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(26,2.534921);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(27,5.2616);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(28,1.66648);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(29,0.8086567);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(30,0.1265664);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinContent(31,0.1265664);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(2,7.348427);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(3,10.43892);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(4,8.941006);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(5,7.123067);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(6,6.715298);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(7,13.91051);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(8,6.787697);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(9,4.775027);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(10,5.64812);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(11,7.518795);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(12,15.55296);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(13,4.243002);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(14,3.460469);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(15,11.6274);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(16,4.002861);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(17,4.423969);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(18,3.877918);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(19,1.633613);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(20,3.193726);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(21,2.424844);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(22,2.292214);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(23,0.7944289);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(24,2.288823);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(25,0.8782972);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(26,0.7542144);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(27,2.252573);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(28,0.5717815);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(29,0.3839375);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(30,0.1265664);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetBinError(31,0.1265664);
   VbbHcc_algo_H_dR_Bj1_stack_5->SetEntries(3417);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_5->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_5,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_6 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(4,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(6,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(9,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(10,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(11,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(12,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(13,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinContent(18,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(4,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(6,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(9,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(10,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(11,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(12,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(13,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetBinError(18,0.2890483);
   VbbHcc_algo_H_dR_Bj1_stack_6->SetEntries(8);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_6->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_6,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(2,1.451314);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(3,6.012586);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(4,1.036653);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(5,0.8293223);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(6,1.243983);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(7,1.451314);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(9,0.6219917);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(10,0.6219917);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(11,0.8293223);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(12,0.6219917);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(13,0.6219917);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(14,0.4146611);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(15,0.4146611);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(17,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(18,0.4146611);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(19,0.4146611);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(20,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(22,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(24,0.6219917);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(25,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(26,0.4146611);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinContent(27,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(2,0.5485451);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(3,1.116509);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(4,0.4636052);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(5,0.4146611);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(6,0.5078541);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(7,0.5485451);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(9,0.3591071);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(10,0.3591071);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(11,0.4146611);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(12,0.3591071);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(13,0.3591071);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(14,0.2932097);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(15,0.2932097);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(17,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(18,0.2932097);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(19,0.2932097);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(20,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(22,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(24,0.3591071);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(25,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(26,0.2932097);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetBinError(27,0.2073306);
   VbbHcc_algo_H_dR_Bj1_stack_7->SetEntries(92);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_7->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_7,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(2,2.88525);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(3,4.946142);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(4,2.88525);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(5,1.236536);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(6,0.6182678);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(7,0.6182678);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(8,0.6182678);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(9,1.030446);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(10,0.824357);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(11,0.4121785);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(13,0.6182678);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(14,1.030446);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(16,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(17,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(18,0.4121785);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(19,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(20,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(22,0.4121785);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(23,0.6182678);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(24,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinContent(26,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(2,0.7711154);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(3,1.009627);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(4,0.7711154);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(5,0.5048135);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(6,0.3569571);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(7,0.3569571);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(8,0.3569571);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(9,0.4608296);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(10,0.4121785);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(11,0.2914542);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(13,0.3569571);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(14,0.4608296);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(16,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(17,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(18,0.2914542);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(19,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(20,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(22,0.2914542);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(23,0.3569571);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(24,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetBinError(26,0.2060893);
   VbbHcc_algo_H_dR_Bj1_stack_8->SetEntries(99);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_8->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_8,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_9 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_9","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(2,1.552044);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(3,2.902939);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(4,1.691476);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(5,0.816023);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(6,0.5097286);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(7,0.4662988);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(8,0.3794393);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(9,0.3977255);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(10,0.3840108);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(11,0.2880081);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(12,0.2765792);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(13,0.2354352);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(14,0.2422925);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(15,0.2491499);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(16,0.217149);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(17,0.1645761);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(18,0.1348609);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(19,0.1691476);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(20,0.1280036);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(21,0.1142889);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(22,0.1257178);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(23,0.08228803);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(24,0.0960027);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(25,0.08914537);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(26,0.09143115);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(27,0.05257291);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(28,0.03657246);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(29,0.01828623);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(30,0.002285779);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinContent(31,0.002285779);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(2,0.05956197);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(3,0.08145843);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(4,0.0621799);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(5,0.04318852);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(6,0.03413395);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(7,0.03264745);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(8,0.0294502);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(9,0.03015149);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(10,0.02962708);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(11,0.0256578);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(12,0.02514357);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(13,0.02319812);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(14,0.02353353);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(15,0.02386423);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(16,0.02227901);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(17,0.01939547);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(18,0.0175574);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(19,0.01966301);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(20,0.0171052);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(21,0.0161629);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(22,0.01695179);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(23,0.01371467);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(24,0.01481354);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(25,0.01427468);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(26,0.01445653);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(27,0.01096221);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(28,0.009143115);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(29,0.006465158);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(30,0.002285779);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetBinError(31,0.002285779);
   VbbHcc_algo_H_dR_Bj1_stack_9->SetEntries(5213);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_9->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_9,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_10 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_10","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(2,0.6426439);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(3,1.631648);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(4,1.362191);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(5,0.8191027);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(6,0.564549);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(7,0.4494931);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(8,0.4375702);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(9,0.3809364);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(10,0.3451677);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(11,0.3314564);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(12,0.2933032);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(13,0.2670728);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(14,0.2593229);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(15,0.2354771);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(16,0.2205735);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(17,0.2259388);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(18,0.1985162);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(19,0.1710935);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(20,0.1573822);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(21,0.1514207);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(22,0.1096906);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(23,0.1132675);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(24,0.07451808);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(25,0.07451808);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(26,0.05484531);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(27,0.03278796);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(28,0.01728819);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(29,0.00774988);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(30,0.001788434);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinContent(31,0.006557591);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(2,0.01957316);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(3,0.03118811);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(4,0.02849671);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(5,0.0220976);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(6,0.01834538);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(7,0.01636957);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(8,0.01615101);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(9,0.01506961);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(10,0.01434468);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(11,0.01405688);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(12,0.01322313);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(13,0.012618);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(14,0.01243358);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(15,0.01184814);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(16,0.01146707);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(17,0.0116057);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(18,0.01087862);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(19,0.01009933);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(20,0.009686204);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(21,0.009500982);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(22,0.008086499);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(23,0.008217287);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(24,0.0066651);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(25,0.0066651);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(26,0.005718019);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(27,0.004421127);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(28,0.003210337);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(29,0.00214943);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(30,0.001032553);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetBinError(31,0.001977188);
   VbbHcc_algo_H_dR_Bj1_stack_10->SetEntries(16167);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_10->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_10,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(2,0.04323948);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(3,0.1024093);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(4,0.1479245);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(5,0.09330624);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(6,0.04323948);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(7,0.02048186);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(8,0.009103048);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(9,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(10,0.01137881);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(11,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(12,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(13,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(14,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(15,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(19,0.01137881);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(20,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(21,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(22,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(24,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(25,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(26,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinContent(27,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(2,0.009919816);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(3,0.01526627);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(4,0.01834778);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(5,0.01457199);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(6,0.009919816);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(7,0.006827286);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(8,0.004551524);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(9,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(10,0.005088758);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(11,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(12,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(13,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(14,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(15,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(16,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(17,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(18,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(19,0.005088758);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(20,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(21,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(22,0.003941735);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(24,0.002275762);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(25,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(26,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetBinError(27,0.003218413);
   VbbHcc_algo_H_dR_Bj1_stack_11->SetEntries(246);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_11->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_11,"");
   
   TH1D *VbbHcc_algo_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(2,0.005393822);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(3,0.03565916);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(4,0.04614715);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(5,0.03386122);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(6,0.01678078);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(7,0.01018833);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(8,0.005393822);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(9,0.003296225);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(10,0.002097598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(11,0.001498284);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(12,0.002696911);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(13,0.003296225);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(14,0.002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(15,0.001498284);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(16,0.001797941);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(17,0.002097598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(18,0.002696911);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(19,0.001797941);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(20,0.001198627);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(21,0.004195195);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(22,0.002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(23,0.003296225);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(24,0.001498284);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(25,0.002097598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(26,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinContent(28,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(2,0.001271336);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(3,0.00326887);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(4,0.003718643);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(5,0.003185395);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(6,0.002242426);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(7,0.001747284);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(8,0.001271336);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(9,0.0009938492);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(10,0.0007928174);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(11,0.000670053);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(12,0.0008989704);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(13,0.0009938492);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(14,0.000947598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(15,0.000670053);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(16,0.0007340063);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(17,0.0007928174);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(18,0.0008989704);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(19,0.0007340063);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(20,0.0005993136);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(21,0.001121213);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(22,0.000947598);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(23,0.0009938492);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(24,0.000670053);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(25,0.0007928174);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(26,0.0004237787);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetBinError(28,0.0002996568);
   VbbHcc_algo_H_dR_Bj1_stack_12->SetEntries(653);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1_stack_12->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_Bj1_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_algo_H_dR_Bj1__285 = new TH1D("VbbHcc_algo_H_dR_Bj1__285","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(1,16);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(2,11822);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(3,22367);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(4,20301);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(5,21938);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(6,21891);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(7,20644);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(8,19388);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(9,17922);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(10,16802);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(11,15558);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(12,14320);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(13,13363);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(14,12353);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(15,11753);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(16,10874);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(17,9552);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(18,8228);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(19,7109);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(20,5949);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(21,4895);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(22,4078);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(23,3224);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(24,2631);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(25,1976);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(26,1575);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(27,1043);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(28,683);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(29,377);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(30,183);
   VbbHcc_algo_H_dR_Bj1__285->SetBinContent(31,256);
   VbbHcc_algo_H_dR_Bj1__285->SetEntries(303100);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_Bj1__285->SetLineColor(ci);
   VbbHcc_algo_H_dR_Bj1__285->SetLineWidth(2);
   VbbHcc_algo_H_dR_Bj1__285->SetMarkerStyle(20);
   VbbHcc_algo_H_dR_Bj1__285->SetMarkerSize(1.2);
   VbbHcc_algo_H_dR_Bj1__285->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_Bj1__285->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__285->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__285->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__285->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__285->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__285->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__285->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__285->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj1__285->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__285->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__285->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj1__285->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj1__285->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__285->Draw("same E");
   
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fx1285[30] = {
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fy1285[30] = {
   1.60104,
   11239.13,
   18844.9,
   16019.84,
   12878.01,
   13175.93,
   11713.35,
   12343.25,
   11929.79,
   9154.343,
   9037.645,
   9103.29,
   8708.898,
   9480.42,
   9234.282,
   7394.823,
   7176.243,
   6497.154,
   4598.352,
   4458.005,
   2995.633,
   4568.733,
   3135.028,
   1336.049,
   942.8174,
   816.9132,
   520.2473,
   380.3053,
   156.1305,
   69.80215};
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fex1285[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_algo_H_dR_Bj1_fey1285[30] = {
   0.2887594,
   1413.558,
   1670.698,
   2188.789,
   1247.989,
   1335.698,
   1147.625,
   1290.843,
   1101.209,
   845.2332,
   905.9771,
   1021.245,
   962.342,
   1854.945,
   1078.059,
   889.9709,
   1003.757,
   943.1381,
   638.6381,
   722.5024,
   400.8463,
   929.8316,
   783.563,
   146.9786,
   123.1385,
   112.108,
   85.70504,
   74.14538,
   42.79252,
   23.06693};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_algo_H_dR_Bj1_fx1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fy1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fex1285,Graph_from_VbbHcc_algo_H_dR_Bj1_fey1285);
   gre->SetName("Graph_from_VbbHcc_algo_H_dR_Bj1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285 = new TH1F("Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285","",100,0,6.6);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetMinimum(1.181053);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetMaximum(22567.02);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetDirectory(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_algo_H_dR_Bj11285);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_algo_H_dR_Bj1_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_algo_H_dR_Bj1","MC unc. (stat.)","fl");

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
   H_dR_Bj1_algo_18->cd();
  
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
   
   TH1D *data_mc_ratio__286 = new TH1D("data_mc_ratio__286","",30,0,6);
   data_mc_ratio__286->SetBinContent(1,9.993503);
   data_mc_ratio__286->SetBinContent(2,1.051861);
   data_mc_ratio__286->SetBinContent(3,1.186899);
   data_mc_ratio__286->SetBinContent(4,1.267241);
   data_mc_ratio__286->SetBinContent(5,1.703524);
   data_mc_ratio__286->SetBinContent(6,1.661439);
   data_mc_ratio__286->SetBinContent(7,1.762434);
   data_mc_ratio__286->SetBinContent(8,1.570738);
   data_mc_ratio__286->SetBinContent(9,1.50229);
   data_mc_ratio__286->SetBinContent(10,1.835413);
   data_mc_ratio__286->SetBinContent(11,1.721466);
   data_mc_ratio__286->SetBinContent(12,1.573058);
   data_mc_ratio__286->SetBinContent(13,1.534408);
   data_mc_ratio__286->SetBinContent(14,1.303001);
   data_mc_ratio__286->SetBinContent(15,1.272757);
   data_mc_ratio__286->SetBinContent(16,1.470488);
   data_mc_ratio__286->SetBinContent(17,1.331059);
   data_mc_ratio__286->SetBinContent(18,1.266401);
   data_mc_ratio__286->SetBinContent(19,1.545989);
   data_mc_ratio__286->SetBinContent(20,1.334453);
   data_mc_ratio__286->SetBinContent(21,1.634045);
   data_mc_ratio__286->SetBinContent(22,0.8925889);
   data_mc_ratio__286->SetBinContent(23,1.02838);
   data_mc_ratio__286->SetBinContent(24,1.969239);
   data_mc_ratio__286->SetBinContent(25,2.095846);
   data_mc_ratio__286->SetBinContent(26,1.927989);
   data_mc_ratio__286->SetBinContent(27,2.004816);
   data_mc_ratio__286->SetBinContent(28,1.795925);
   data_mc_ratio__286->SetBinContent(29,2.414646);
   data_mc_ratio__286->SetBinContent(30,2.621696);
   data_mc_ratio__286->SetBinContent(31,2.946023);
   data_mc_ratio__286->SetBinError(1,2.498376);
   data_mc_ratio__286->SetBinError(2,0.00967415);
   data_mc_ratio__286->SetBinError(3,0.007936153);
   data_mc_ratio__286->SetBinError(4,0.008894068);
   data_mc_ratio__286->SetBinError(5,0.01150138);
   data_mc_ratio__286->SetBinError(6,0.01122927);
   data_mc_ratio__286->SetBinError(7,0.01226636);
   data_mc_ratio__286->SetBinError(8,0.01128073);
   data_mc_ratio__286->SetBinError(9,0.01122175);
   data_mc_ratio__286->SetBinError(10,0.01415968);
   data_mc_ratio__286->SetBinError(11,0.01380135);
   data_mc_ratio__286->SetBinError(12,0.01314538);
   data_mc_ratio__286->SetBinError(13,0.0132736);
   data_mc_ratio__286->SetBinError(14,0.01172354);
   data_mc_ratio__286->SetBinError(15,0.01174008);
   data_mc_ratio__286->SetBinError(16,0.01410155);
   data_mc_ratio__286->SetBinError(17,0.01361915);
   data_mc_ratio__286->SetBinError(18,0.01396124);
   data_mc_ratio__286->SetBinError(19,0.01833589);
   data_mc_ratio__286->SetBinError(20,0.01730141);
   data_mc_ratio__286->SetBinError(21,0.02335542);
   data_mc_ratio__286->SetBinError(22,0.01397745);
   data_mc_ratio__286->SetBinError(23,0.01811157);
   data_mc_ratio__286->SetBinError(24,0.03839176);
   data_mc_ratio__286->SetBinError(25,0.04714829);
   data_mc_ratio__286->SetBinError(26,0.04858076);
   data_mc_ratio__286->SetBinError(27,0.06207723);
   data_mc_ratio__286->SetBinError(28,0.06871918);
   data_mc_ratio__286->SetBinError(29,0.1243606);
   data_mc_ratio__286->SetBinError(30,0.1938013);
   data_mc_ratio__286->SetBinError(31,0.9018035);
   data_mc_ratio__286->SetMinimum(0.4);
   data_mc_ratio__286->SetMaximum(1.6);
   data_mc_ratio__286->SetEntries(265.8936);
   data_mc_ratio__286->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__286->SetLineColor(ci);
   data_mc_ratio__286->SetLineWidth(2);
   data_mc_ratio__286->SetMarkerStyle(20);
   data_mc_ratio__286->SetMarkerSize(1.2);
   data_mc_ratio__286->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   data_mc_ratio__286->GetXaxis()->SetRange(1,30);
   data_mc_ratio__286->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__286->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__286->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__286->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__286->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__286->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__286->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__286->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__286->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__286->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__286->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__286->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__286->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__286->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__286->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__286->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__286->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1286[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1286[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1286[30] = {
   0.1803574,
   0.1257711,
   0.08865516,
   0.1366298,
   0.09690852,
   0.1013742,
   0.09797586,
   0.1045789,
   0.09230749,
   0.09233138,
   0.1002448,
   0.1121842,
   0.110501,
   0.1956607,
   0.1167453,
   0.1203505,
   0.1398722,
   0.1451617,
   0.1388841,
   0.1620685,
   0.1338102,
   0.2035207,
   0.2499381,
   0.1100099,
   0.1306069,
   0.1372336,
   0.164739,
   0.1949628,
   0.2740817,
   0.3304616};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1286,Graph_from_mc_statistical_error_fy1286,Graph_from_mc_statistical_error_fex1286,Graph_from_mc_statistical_error_fey1286);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1286 = new TH1F("Graph_Graph_from_mc_statistical_error1286","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1286->SetMinimum(0.6034461);
   Graph_Graph_from_mc_statistical_error1286->SetMaximum(1.396554);
   Graph_Graph_from_mc_statistical_error1286->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1286->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1286->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1286->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1286->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1286);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->Modified();
   H_dR_Bj1_algo_18->cd();
   H_dR_Bj1_algo_18->SetSelected(H_dR_Bj1_algo_18);
}
