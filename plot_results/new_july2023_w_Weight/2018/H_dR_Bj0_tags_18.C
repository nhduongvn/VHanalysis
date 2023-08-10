void H_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_18/H_dR_Bj0_tags_18
//=========  (Thu Aug 10 10:41:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_18 = new TCanvas("H_dR_Bj0_tags_18", "H_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_18->SetHighLightColor(2);
   H_dR_Bj0_tags_18->Range(0,0,1,1);
   H_dR_Bj0_tags_18->SetFillColor(0);
   H_dR_Bj0_tags_18->SetFillStyle(4000);
   H_dR_Bj0_tags_18->SetBorderMode(0);
   H_dR_Bj0_tags_18->SetBorderSize(2);
   H_dR_Bj0_tags_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tags_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.865867,6.314516,12.2298);
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
   st->SetMaximum(1.527846e+10);
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",30,0,6);
   st_stack_43->SetMinimum(0.001410032);
   st_stack_43->SetMaximum(5.250924e+10);
   st_stack_43->SetDirectory(0);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->GetXaxis()->SetRange(1,30);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetLabelSize(0.035);
   st_stack_43->GetXaxis()->SetTitleSize(0.035);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Events/0.2");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetLabelSize(0.05);
   st_stack_43->GetYaxis()->SetTitleSize(0.057);
   st_stack_43->GetYaxis()->SetTitleOffset(1.2);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetLabelSize(0.035);
   st_stack_43->GetZaxis()->SetTitleSize(0.035);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(1,5345.833);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(2,25069.7);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(3,28259.31);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(4,21071.42);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(5,18539.24);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(6,16093.97);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(7,15774.53);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(8,12085.18);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(9,9872.162);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(10,9472.196);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(11,7533.034);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(12,7371.121);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(13,7678.195);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(14,5382.187);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(15,3511.737);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(16,4573.635);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(17,3463.547);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(18,3313.033);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(19,1996.18);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(20,1557.87);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(21,1577.966);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(22,1119.023);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(23,2522.379);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(24,1098.25);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(25,464.295);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(26,323.4445);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(27,104.2249);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(28,134.3274);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(29,18.62611);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(30,113.814);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinContent(31,181.4279);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(1,700.3452);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(2,2017.439);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(3,2331.189);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(4,2058.239);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(5,1880.134);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(6,2389.465);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(7,1894.68);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(8,2083.268);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(9,1335.216);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(10,2002.767);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(11,1210.593);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(12,1098.163);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(13,1262.002);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(14,948.3904);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(15,577.6343);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(16,866.5846);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(17,772.5845);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(18,770.0896);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(19,417.0708);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(20,404.606);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(21,542.4286);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(22,391.677);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(23,1678.133);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(24,394.8646);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(25,102.6702);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(26,80.61165);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(27,39.69234);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(28,43.43071);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(29,12.03004);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(30,56.00642);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetBinError(31,71.89866);
   VbbHcc_tags_H_dR_Bj0_stack_1->SetEntries(10038);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(1,34.55849);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(2,138.3264);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(3,152.9285);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(4,127.9401);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(5,115.4556);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(6,95.82819);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(7,82.7212);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(8,69.28281);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(9,61.23037);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(10,52.54239);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(11,46.06834);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(12,48.73811);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(13,42.44973);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(14,38.4801);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(15,32.3268);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(16,25.41571);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(17,23.26688);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(18,19.18168);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(19,15.63407);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(20,11.96744);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(21,10.70314);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(22,8.192094);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(23,8.602688);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(24,4.844188);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(25,5.336375);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(26,2.789649);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(27,2.568521);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(28,2.178336);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(29,1.415244);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(30,0.6900383);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinContent(31,1.291446);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(1,2.46996);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(2,4.777419);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(3,5.001941);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(4,4.593206);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(5,4.368331);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(6,3.924944);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(7,3.758332);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(8,3.377794);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(9,3.203131);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(10,2.984178);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(11,2.606315);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(12,2.917144);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(13,2.685039);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(14,2.493603);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(15,2.261094);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(16,1.973389);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(17,1.813113);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(18,1.726469);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(19,1.550134);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(20,1.336313);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(21,1.286178);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(22,1.129151);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(23,1.191949);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(24,0.7955393);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(25,1.034481);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(26,0.5809673);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(27,0.6188109);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(28,0.5979572);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(29,0.5075182);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(30,0.3129228);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetBinError(31,0.4420201);
   VbbHcc_tags_H_dR_Bj0_stack_2->SetEntries(14154);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_2,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_3 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_3","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(1,519.2139);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(2,2484.984);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(3,3159.07);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(4,2908.689);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(5,2385.524);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(6,1939.382);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(7,1566.29);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(8,1337.591);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(9,1156.144);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(10,1050.785);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(11,935.7712);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(12,853.5128);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(13,788.2067);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(14,695.5167);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(15,622.0415);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(16,544.5049);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(17,454.7777);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(18,354.6605);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(19,302.9615);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(20,248.0524);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(21,201.2175);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(22,150.727);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(23,125.9291);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(24,95.10723);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(25,69.09734);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(26,56.88636);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(27,38.15958);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(28,26.11098);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(29,14.80719);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(30,10.40802);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinContent(31,16.97259);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(1,6.114854);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(2,13.37886);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(3,15.11119);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(4,14.50922);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(5,13.1356);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(6,11.84189);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(7,10.6342);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(8,9.82848);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(9,9.135886);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(10,8.715226);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(11,8.225835);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(12,7.854805);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(13,7.546641);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(14,7.092673);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(15,6.703803);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(16,6.268347);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(17,5.72967);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(18,5.057903);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(19,4.674381);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(20,4.232434);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(21,3.809992);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(22,3.294521);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(23,3.010164);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(24,2.616093);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(25,2.228726);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(26,2.022343);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(27,1.657124);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(28,1.369275);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(29,1.031963);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(30,0.8652931);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetBinError(31,1.098808);
   VbbHcc_tags_H_dR_Bj0_stack_3->SetEntries(352917);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_3->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_3,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_4 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_4","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(1,101.7902);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(2,388.0263);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(3,440.3984);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(4,341.728);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(5,268.8054);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(6,238.4441);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(7,186.8854);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(8,181.4265);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(9,140.9011);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(10,127.8087);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(11,125.1117);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(12,114.4617);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(13,101.4872);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(14,100.5471);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(15,76.9592);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(16,69.08079);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(17,58.4735);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(18,42.49057);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(19,44.95446);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(20,34.87057);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(21,24.3994);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(22,16.0079);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(23,19.59942);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(24,13.19852);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(25,9.826732);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(26,5.660767);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(27,5.468578);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(28,3.451544);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(29,1.084713);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(30,2.022701);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinContent(31,1.788435);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(1,4.524782);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(2,13.50025);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(3,16.84671);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(4,12.9405);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(5,12.04868);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(6,9.583804);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(7,10.06461);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(8,10.79715);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(9,7.575454);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(10,7.287938);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(11,6.224674);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(12,8.869664);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(13,7.731571);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(14,7.783631);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(15,6.104128);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(16,5.873501);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(17,5.599051);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(18,3.502898);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(19,3.815843);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(20,4.933404);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(21,2.796316);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(22,1.969667);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(23,4.549225);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(24,4.303893);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(25,1.462825);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(26,1.211986);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(27,1.199411);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(28,0.7723078);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(29,0.3298002);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(30,0.6689403);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetBinError(31,0.7895444);
   VbbHcc_tags_H_dR_Bj0_stack_4->SetEntries(18490);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_4->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_4,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_5 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_5","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(1,9.575589);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(2,32.10887);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(3,36.74354);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(4,37.51344);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(5,25.75901);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(6,27.22587);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(7,24.52892);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(8,16.28196);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(9,12.68675);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(10,13.10134);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(11,7.785924);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(12,12.74932);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(13,14.25877);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(14,8.958471);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(15,7.078678);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(16,6.593126);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(17,3.618674);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(18,6.373419);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(19,4.299646);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(20,3.972441);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(21,3.053713);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(22,2.152933);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(23,2.319171);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(24,0.918509);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(25,1.068233);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(26,0.953658);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(27,0.5178375);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(28,0.3222406);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(29,0.3427113);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(30,0.1386418);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinContent(31,0.3791957);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(1,1.212711);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(2,4.268102);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(3,5.146152);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(4,11.46096);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(5,4.402335);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(6,4.613687);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(7,4.541958);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(8,3.324507);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(9,2.517656);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(10,3.236283);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(11,1.146941);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(12,3.187323);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(13,4.289409);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(14,2.376142);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(15,2.290521);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(16,1.080023);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(17,0.8314241);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(18,2.263757);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(19,2.145543);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(20,2.162866);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(21,0.7833443);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(22,0.6880957);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(23,0.613951);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(24,0.3697995);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(25,0.4056006);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(26,0.4941927);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(27,0.2530935);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(28,0.1851327);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(29,0.1897247);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(30,0.1269901);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetBinError(31,0.2189288);
   VbbHcc_tags_H_dR_Bj0_stack_5->SetEntries(2375);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_5->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_5,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(1,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(2,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinContent(16,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(1,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(2,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(3,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetBinError(16,0.4520427);
   VbbHcc_tags_H_dR_Bj0_stack_6->SetEntries(4);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_6->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_6,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(1,1.416796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,2.833593);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,1.416796);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(7,1.062597);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(18,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(1,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,1.001826);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.7083982);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(7,0.6134909);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(9,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(18,0.5009132);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(27,0.3541991);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(32);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_7,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(1,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(2,6.985359);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(3,8.941259);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(4,9.500088);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(5,5.308873);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(6,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(7,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(8,1.397072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(9,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(10,3.632387);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(11,4.191215);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(12,2.794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(13,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(14,3.073558);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(15,2.235315);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(16,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(17,1.117657);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(18,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(19,0.8382431);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(23,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(24,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinContent(26,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(1,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(2,1.397072);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(3,1.580606);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(4,1.629252);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(5,1.217939);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(6,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(7,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(8,0.6247895);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(9,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(10,1.007443);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(11,1.082167);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(12,0.8835858);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(13,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(14,0.9267126);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(15,0.7903031);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(16,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(17,0.5588287);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(18,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(19,0.4839599);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(23,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(24,0.3951516);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetBinError(26,0.2794144);
   VbbHcc_tags_H_dR_Bj0_stack_8->SetEntries(230);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_8->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_8,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_9 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_9","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(1,1.645761);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(2,8.096228);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(3,9.140829);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(4,7.531641);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(5,5.575014);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(6,4.173832);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(7,3.339523);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(8,2.809222);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(9,2.58293);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(10,2.694933);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(11,2.617217);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(12,2.477784);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(13,2.361209);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(14,1.920054);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(15,1.456041);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(16,1.014886);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(17,0.7497354);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(18,0.5280149);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(19,0.3108659);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(20,0.2537214);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(21,0.2331494);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(22,0.2057201);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(23,0.1462898);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(24,0.1417183);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(25,0.1211463);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(26,0.08000225);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(27,0.05257291);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(28,0.01142889);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(29,0.004571557);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(30,0.01371467);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinContent(31,0.006857336);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(1,0.06133388);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(2,0.1360374);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(3,0.1445473);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(4,0.1312085);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(5,0.112886);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(6,0.09767526);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(7,0.08736939);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(8,0.08013276);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(9,0.07683753);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(10,0.0784858);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(11,0.07734583);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(12,0.07525733);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(13,0.07346565);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(14,0.06624816);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(15,0.05769044);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(16,0.04816434);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(17,0.04139721);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(18,0.03474083);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(19,0.02665653);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(20,0.02408217);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(21,0.02308523);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(22,0.0216848);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(23,0.01828623);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(24,0.01799824);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(25,0.01664072);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(26,0.01352285);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(27,0.01096221);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(28,0.005111156);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(29,0.003232579);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(30,0.005598991);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetBinError(31,0.003959085);
   VbbHcc_tags_H_dR_Bj0_stack_9->SetEntries(27254);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_9->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_9,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_10 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_10","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(1,0.6728738);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(2,3.326124);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(3,4.344996);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(4,3.820321);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(5,2.882123);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(6,2.089733);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(7,1.61167);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(8,1.394749);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(9,1.230415);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(10,1.109704);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(11,1.122851);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(12,1.00214);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(13,0.9065271);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(14,0.7882065);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(15,0.6645077);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(16,0.5330403);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(17,0.4362325);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(18,0.3137289);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(19,0.2462025);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(20,0.1852494);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(21,0.1481995);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(22,0.1213085);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(23,0.1027836);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(24,0.07469735);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(25,0.04900146);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(26,0.02987894);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(27,0.02450073);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(28,0.01195158);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(29,0.01015884);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(30,0.002390315);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinContent(31,0.005975788);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(1,0.02005231);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(2,0.04458274);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(3,0.05095564);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(4,0.04778016);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(5,0.04150055);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(6,0.03533809);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(7,0.03103385);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(8,0.02886992);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(9,0.02711586);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(10,0.02575142);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(11,0.02590351);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(12,0.02447156);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(13,0.02327491);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(14,0.02170289);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(15,0.01992726);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(16,0.01784751);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(17,0.01614569);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(18,0.01369225);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(19,0.01212953);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(20,0.01052146);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(21,0.009410681);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(22,0.008514188);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(23,0.007837173);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(24,0.006681134);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(25,0.005411306);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(26,0.00422552);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(27,0.003826371);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(28,0.002672454);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(29,0.002463881);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(30,0.001195158);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetBinError(31,0.00188971);
   VbbHcc_tags_H_dR_Bj0_stack_10->SetEntries(48968);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_10->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_10,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(1,0.005255579);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(2,0.02102232);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(3,0.0236501);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(4,0.02102232);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(5,0.02102232);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(6,0.01051116);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(7,0.01313895);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(8,0.005255579);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(9,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(10,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(11,0.005255579);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(14,0.005255579);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(15,0.005255579);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(16,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(17,0.005255579);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(19,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(20,0.005255579);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(21,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinContent(22,0.007883368);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(1,0.003716255);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(2,0.007432511);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(3,0.007883368);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(4,0.007432511);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(5,0.007432511);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(6,0.005255579);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(7,0.005875916);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(8,0.003716255);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(9,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(10,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(11,0.003716255);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(14,0.003716255);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(15,0.003716255);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(16,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(17,0.003716255);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(19,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(20,0.003716255);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(21,0.002627789);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetBinError(22,0.004551465);
   VbbHcc_tags_H_dR_Bj0_stack_11->SetEntries(64);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_11->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_11,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(1,0.001797941);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(2,0.01378421);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(3,0.01857872);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(4,0.0110873);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(5,0.009888674);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(6,0.008690047);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(7,0.003296225);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(8,0.005393822);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(9,0.002097598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(10,0.002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(11,0.002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(12,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(13,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(14,0.0008989704);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(15,0.001198627);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(16,0.001198627);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(17,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(19,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(20,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(24,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(25,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinContent(27,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(1,0.0007340063);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(2,0.002032371);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(3,0.0023595);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(4,0.001822741);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(5,0.001721397);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(6,0.001613701);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(7,0.0009938492);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(8,0.001271336);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(9,0.0007928174);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(10,0.000947598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(11,0.000947598);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(12,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(13,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(14,0.0005190208);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(15,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(16,0.0005993136);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(17,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(19,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(20,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(24,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(25,0.0004237787);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(26,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetBinError(27,0.0002996568);
   VbbHcc_tags_H_dR_Bj0_stack_12->SetEntries(298);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0_stack_12->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj0_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_H_dR_Bj0__117 = new TH1D("VbbHcc_tags_H_dR_Bj0__117","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(1,8993);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(2,37477);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(3,38268);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(4,31606);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(5,27007);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(6,22124);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(7,18510);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(8,16201);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(9,14214);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(10,12934);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(11,11743);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(12,10844);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(13,9938);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(14,8926);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(15,8199);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(16,7147);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(17,5783);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(18,4862);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(19,3941);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(20,3272);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(21,2661);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(22,2182);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(23,1790);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(24,1421);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(25,1081);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(26,796);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(27,621);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(28,415);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(29,245);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(30,160);
   VbbHcc_tags_H_dR_Bj0__117->SetBinContent(31,284);
   VbbHcc_tags_H_dR_Bj0__117->SetEntries(313674);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj0__117->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj0__117->SetLineWidth(2);
   VbbHcc_tags_H_dR_Bj0__117->SetMarkerStyle(20);
   VbbHcc_tags_H_dR_Bj0__117->SetMarkerSize(1.2);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0__117->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0__117->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__117->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fx1085[30] = {
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fy1085[30] = {
   6016.283,
   28134.87,
   32072.78,
   24508.88,
   21348.93,
   18404.21,
   17642.1,
   13695.37,
   11250.72,
   10723.88,
   8655.71,
   8407.566,
   8631.293,
   6231.478,
   4254.859,
   5222.071,
   4006.348,
   3738.129,
   2365.428,
   1857.178,
   1817.724,
   1296.438,
   2679.358,
   1213.094,
   549.7945,
   390.1245,
   151.371,
   166.4139,
   36.2907,
   127.0895};
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fex1085[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_VbbHcc_tags_H_dR_Bj0_fey1085[30] = {
   700.3927,
   2017.54,
   2331.311,
   2058.369,
   1880.229,
   2389.522,
   1894.746,
   2083.325,
   1335.275,
   2002.804,
   1210.641,
   1098.236,
   1262.059,
   948.4556,
   577.7151,
   866.6303,
   772.6289,
   770.1198,
   417.1231,
   404.6661,
   542.4513,
   391.698,
   1678.142,
   394.8979,
   102.7108,
   80.65022,
   39.75222,
   43.46366,
   12.09087,
   56.01811};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_VbbHcc_tags_H_dR_Bj0_fx1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fy1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fex1085,Graph_from_VbbHcc_tags_H_dR_Bj0_fey1085);
   gre->SetName("Graph_from_VbbHcc_tags_H_dR_Bj0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085","",100,0,6.6);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetMinimum(21.77985);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetMaximum(37842.08);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_dR_Bj01085);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj0_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_H_dR_Bj0","MC unc. (stat.)","fl");

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
   H_dR_Bj0_tags_18->cd();
  
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
   
   TH1D *data_mc_ratio__118 = new TH1D("data_mc_ratio__118","",30,0,6);
   data_mc_ratio__118->SetBinContent(1,1.494777);
   data_mc_ratio__118->SetBinContent(2,1.332048);
   data_mc_ratio__118->SetBinContent(3,1.193161);
   data_mc_ratio__118->SetBinContent(4,1.289573);
   data_mc_ratio__118->SetBinContent(5,1.265028);
   data_mc_ratio__118->SetBinContent(6,1.202116);
   data_mc_ratio__118->SetBinContent(7,1.049195);
   data_mc_ratio__118->SetBinContent(8,1.182955);
   data_mc_ratio__118->SetBinContent(9,1.263385);
   data_mc_ratio__118->SetBinContent(10,1.206094);
   data_mc_ratio__118->SetBinContent(11,1.356677);
   data_mc_ratio__118->SetBinContent(12,1.289791);
   data_mc_ratio__118->SetBinContent(13,1.151392);
   data_mc_ratio__118->SetBinContent(14,1.432405);
   data_mc_ratio__118->SetBinContent(15,1.926973);
   data_mc_ratio__118->SetBinContent(16,1.368614);
   data_mc_ratio__118->SetBinContent(17,1.443459);
   data_mc_ratio__118->SetBinContent(18,1.300651);
   data_mc_ratio__118->SetBinContent(19,1.666083);
   data_mc_ratio__118->SetBinContent(20,1.761813);
   data_mc_ratio__118->SetBinContent(21,1.463919);
   data_mc_ratio__118->SetBinContent(22,1.683073);
   data_mc_ratio__118->SetBinContent(23,0.6680705);
   data_mc_ratio__118->SetBinContent(24,1.171385);
   data_mc_ratio__118->SetBinContent(25,1.966189);
   data_mc_ratio__118->SetBinContent(26,2.040374);
   data_mc_ratio__118->SetBinContent(27,4.102503);
   data_mc_ratio__118->SetBinContent(28,2.493782);
   data_mc_ratio__118->SetBinContent(29,6.75104);
   data_mc_ratio__118->SetBinContent(30,1.258955);
   data_mc_ratio__118->SetBinContent(31,1.406829);
   data_mc_ratio__118->SetBinError(1,0.01576246);
   data_mc_ratio__118->SetBinError(2,0.006880777);
   data_mc_ratio__118->SetBinError(3,0.006099317);
   data_mc_ratio__118->SetBinError(4,0.007253729);
   data_mc_ratio__118->SetBinError(5,0.007697718);
   data_mc_ratio__118->SetBinError(6,0.008081922);
   data_mc_ratio__118->SetBinError(7,0.007711748);
   data_mc_ratio__118->SetBinError(8,0.009293882);
   data_mc_ratio__118->SetBinError(9,0.01059687);
   data_mc_ratio__118->SetBinError(10,0.0106051);
   data_mc_ratio__118->SetBinError(11,0.0125195);
   data_mc_ratio__118->SetBinError(12,0.01238581);
   data_mc_ratio__118->SetBinError(13,0.01154978);
   data_mc_ratio__118->SetBinError(14,0.01516133);
   data_mc_ratio__118->SetBinError(15,0.02128116);
   data_mc_ratio__118->SetBinError(16,0.01618896);
   data_mc_ratio__118->SetBinError(17,0.01898139);
   data_mc_ratio__118->SetBinError(18,0.01865319);
   data_mc_ratio__118->SetBinError(19,0.02653955);
   data_mc_ratio__118->SetBinError(20,0.03080017);
   data_mc_ratio__118->SetBinError(21,0.02837883);
   data_mc_ratio__118->SetBinError(22,0.03603094);
   data_mc_ratio__118->SetBinError(23,0.0157905);
   data_mc_ratio__118->SetBinError(24,0.0310744);
   data_mc_ratio__118->SetBinError(25,0.05980156);
   data_mc_ratio__118->SetBinError(26,0.07231915);
   data_mc_ratio__118->SetBinError(27,0.1646278);
   data_mc_ratio__118->SetBinError(28,0.1224149);
   data_mc_ratio__118->SetBinError(29,0.4313081);
   data_mc_ratio__118->SetBinError(30,0.09952915);
   data_mc_ratio__118->SetBinError(31,0.5080605);
   data_mc_ratio__118->SetMinimum(0.4);
   data_mc_ratio__118->SetMaximum(1.6);
   data_mc_ratio__118->SetEntries(281.8737);
   data_mc_ratio__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__118->SetLineColor(ci);
   data_mc_ratio__118->SetLineWidth(2);
   data_mc_ratio__118->SetMarkerStyle(20);
   data_mc_ratio__118->SetMarkerSize(1.2);
   data_mc_ratio__118->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   data_mc_ratio__118->GetXaxis()->SetRange(1,30);
   data_mc_ratio__118->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__118->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__118->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__118->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__118->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__118->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__118->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1086[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1086[30] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t Graph_from_mc_statistical_error_fey1086[30] = {
   0.1164162,
   0.07170958,
   0.07268813,
   0.08398463,
   0.08807135,
   0.1298356,
   0.1073991,
   0.1521189,
   0.1186835,
   0.1867612,
   0.1398662,
   0.1306247,
   0.146219,
   0.152204,
   0.1357777,
   0.1659553,
   0.1928512,
   0.2060174,
   0.1763415,
   0.2178931,
   0.2984233,
   0.302134,
   0.6263225,
   0.3255296,
   0.1868168,
   0.2067294,
   0.2626145,
   0.261178,
   0.3331671,
   0.4407768};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1086,Graph_from_mc_statistical_error_fy1086,Graph_from_mc_statistical_error_fex1086,Graph_from_mc_statistical_error_fey1086);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1086 = new TH1F("Graph_Graph_from_mc_statistical_error1086","",100,0,6.6);
   Graph_Graph_from_mc_statistical_error1086->SetMinimum(0.248413);
   Graph_Graph_from_mc_statistical_error1086->SetMaximum(1.751587);
   Graph_Graph_from_mc_statistical_error1086->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1086->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1086->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1086);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->Modified();
   H_dR_Bj0_tags_18->cd();
   H_dR_Bj0_tags_18->SetSelected(H_dR_Bj0_tags_18);
}
