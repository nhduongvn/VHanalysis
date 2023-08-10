void H_mass_tags_16()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Thu Aug 10 12:23:08 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(0,0,1,1);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetFillStyle(4000);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetFrameFillStyle(1000);
   H_mass_tags_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-16.60945,315.7258,16602.84);
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
   st->SetMaximum(14229.42);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",40,0,400);
   st_stack_5->SetMinimum(0.01);
   st_stack_5->SetMaximum(14940.9);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetRange(1,30);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetLabelSize(0.035);
   st_stack_5->GetXaxis()->SetTitleSize(0.035);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/10.0");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetLabelSize(0.05);
   st_stack_5->GetYaxis()->SetTitleSize(0.057);
   st_stack_5->GetYaxis()->SetTitleOffset(1.2);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetLabelSize(0.035);
   st_stack_5->GetZaxis()->SetTitleSize(0.035);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_tags_H_mass_stack_1 = new TH1D("VbbHcc_tags_H_mass_stack_1","",40,0,400);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(3,354.1398);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(4,4326.638);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(5,3339.487);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(6,6146.464);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(7,4686.842);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(8,4715.376);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(9,4547.512);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(10,4714.562);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(11,2044.797);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(12,2763.129);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(13,2567.088);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(14,4975.209);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(15,5321.724);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(16,4945.116);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(17,3786.792);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(18,4635.731);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(19,2730.151);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(20,2906.942);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(21,2078.064);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(22,2704.85);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(23,2563.309);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(24,3104.627);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(25,3723.533);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(26,2805.637);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(27,2815.771);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(28,3557.913);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(29,2306.664);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(30,2323.967);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(31,1482.671);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(32,2788.46);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(33,1266.904);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(34,1852.775);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(35,3088.772);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(36,1656.425);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(37,3536.465);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(38,3589.539);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(39,1312.818);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(40,2602.024);
   VbbHcc_tags_H_mass_stack_1->SetBinContent(41,62476.97);
   VbbHcc_tags_H_mass_stack_1->SetBinError(3,317.8176);
   VbbHcc_tags_H_mass_stack_1->SetBinError(4,2303.792);
   VbbHcc_tags_H_mass_stack_1->SetBinError(5,855.4424);
   VbbHcc_tags_H_mass_stack_1->SetBinError(6,1183.578);
   VbbHcc_tags_H_mass_stack_1->SetBinError(7,924.6644);
   VbbHcc_tags_H_mass_stack_1->SetBinError(8,932.6467);
   VbbHcc_tags_H_mass_stack_1->SetBinError(9,959.9495);
   VbbHcc_tags_H_mass_stack_1->SetBinError(10,956.7743);
   VbbHcc_tags_H_mass_stack_1->SetBinError(11,474.2008);
   VbbHcc_tags_H_mass_stack_1->SetBinError(12,597.2374);
   VbbHcc_tags_H_mass_stack_1->SetBinError(13,605.6331);
   VbbHcc_tags_H_mass_stack_1->SetBinError(14,1832.825);
   VbbHcc_tags_H_mass_stack_1->SetBinError(15,1841.708);
   VbbHcc_tags_H_mass_stack_1->SetBinError(16,1702.064);
   VbbHcc_tags_H_mass_stack_1->SetBinError(17,1790.951);
   VbbHcc_tags_H_mass_stack_1->SetBinError(18,1677.217);
   VbbHcc_tags_H_mass_stack_1->SetBinError(19,771.483);
   VbbHcc_tags_H_mass_stack_1->SetBinError(20,727.4);
   VbbHcc_tags_H_mass_stack_1->SetBinError(21,583.2811);
   VbbHcc_tags_H_mass_stack_1->SetBinError(22,1572.694);
   VbbHcc_tags_H_mass_stack_1->SetBinError(23,680.3994);
   VbbHcc_tags_H_mass_stack_1->SetBinError(24,1770.87);
   VbbHcc_tags_H_mass_stack_1->SetBinError(25,942.431);
   VbbHcc_tags_H_mass_stack_1->SetBinError(26,720.8714);
   VbbHcc_tags_H_mass_stack_1->SetBinError(27,802.6594);
   VbbHcc_tags_H_mass_stack_1->SetBinError(28,1639.862);
   VbbHcc_tags_H_mass_stack_1->SetBinError(29,707.3297);
   VbbHcc_tags_H_mass_stack_1->SetBinError(30,682.4803);
   VbbHcc_tags_H_mass_stack_1->SetBinError(31,462.9767);
   VbbHcc_tags_H_mass_stack_1->SetBinError(32,796.1256);
   VbbHcc_tags_H_mass_stack_1->SetBinError(33,492.1535);
   VbbHcc_tags_H_mass_stack_1->SetBinError(34,594.6075);
   VbbHcc_tags_H_mass_stack_1->SetBinError(35,1780.078);
   VbbHcc_tags_H_mass_stack_1->SetBinError(36,548.7517);
   VbbHcc_tags_H_mass_stack_1->SetBinError(37,1650.587);
   VbbHcc_tags_H_mass_stack_1->SetBinError(38,1688.866);
   VbbHcc_tags_H_mass_stack_1->SetBinError(39,473.9537);
   VbbHcc_tags_H_mass_stack_1->SetBinError(40,694.5619);
   VbbHcc_tags_H_mass_stack_1->SetBinError(41,4026.102);
   VbbHcc_tags_H_mass_stack_1->SetEntries(9435);

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
   VbbHcc_tags_H_mass_stack_2->SetBinContent(3,0.351841);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(4,3.290539);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(5,6.743359);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(6,7.708485);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(7,12.04609);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(8,18.95222);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(9,20.25528);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(10,18.8649);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(11,19.32257);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(12,19.88534);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(13,19.59195);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(14,14.17626);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(15,17.79037);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(16,14.85308);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(17,15.14648);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(18,12.6092);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(19,10.72645);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(20,13.5277);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(21,13.55965);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(22,10.90043);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(23,12.34707);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(24,9.718081);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(25,10.84901);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(26,9.091536);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(27,9.994216);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(28,10.45224);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(29,8.497732);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(30,7.838209);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(31,9.525186);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(32,8.449445);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(33,8.443939);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(34,8.111698);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(35,6.825839);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(36,6.582997);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(37,5.554516);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(38,6.199372);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(39,6.072662);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(40,5.395662);
   VbbHcc_tags_H_mass_stack_2->SetBinContent(41,284.822);
   VbbHcc_tags_H_mass_stack_2->SetBinError(3,0.1374619);
   VbbHcc_tags_H_mass_stack_2->SetBinError(4,0.6619537);
   VbbHcc_tags_H_mass_stack_2->SetBinError(5,1.070892);
   VbbHcc_tags_H_mass_stack_2->SetBinError(6,1.014258);
   VbbHcc_tags_H_mass_stack_2->SetBinError(7,1.435701);
   VbbHcc_tags_H_mass_stack_2->SetBinError(8,1.857412);
   VbbHcc_tags_H_mass_stack_2->SetBinError(9,1.93463);
   VbbHcc_tags_H_mass_stack_2->SetBinError(10,1.828255);
   VbbHcc_tags_H_mass_stack_2->SetBinError(11,1.859518);
   VbbHcc_tags_H_mass_stack_2->SetBinError(12,1.894884);
   VbbHcc_tags_H_mass_stack_2->SetBinError(13,1.903804);
   VbbHcc_tags_H_mass_stack_2->SetBinError(14,1.516572);
   VbbHcc_tags_H_mass_stack_2->SetBinError(15,1.908608);
   VbbHcc_tags_H_mass_stack_2->SetBinError(16,1.572937);
   VbbHcc_tags_H_mass_stack_2->SetBinError(17,1.666447);
   VbbHcc_tags_H_mass_stack_2->SetBinError(18,1.517906);
   VbbHcc_tags_H_mass_stack_2->SetBinError(19,1.312656);
   VbbHcc_tags_H_mass_stack_2->SetBinError(20,1.493096);
   VbbHcc_tags_H_mass_stack_2->SetBinError(21,1.603069);
   VbbHcc_tags_H_mass_stack_2->SetBinError(22,1.428454);
   VbbHcc_tags_H_mass_stack_2->SetBinError(23,1.555996);
   VbbHcc_tags_H_mass_stack_2->SetBinError(24,1.330772);
   VbbHcc_tags_H_mass_stack_2->SetBinError(25,1.385352);
   VbbHcc_tags_H_mass_stack_2->SetBinError(26,1.212727);
   VbbHcc_tags_H_mass_stack_2->SetBinError(27,1.34972);
   VbbHcc_tags_H_mass_stack_2->SetBinError(28,1.402934);
   VbbHcc_tags_H_mass_stack_2->SetBinError(29,1.272153);
   VbbHcc_tags_H_mass_stack_2->SetBinError(30,1.132029);
   VbbHcc_tags_H_mass_stack_2->SetBinError(31,1.356497);
   VbbHcc_tags_H_mass_stack_2->SetBinError(32,1.260661);
   VbbHcc_tags_H_mass_stack_2->SetBinError(33,1.248836);
   VbbHcc_tags_H_mass_stack_2->SetBinError(34,1.194433);
   VbbHcc_tags_H_mass_stack_2->SetBinError(35,1.130846);
   VbbHcc_tags_H_mass_stack_2->SetBinError(36,1.025733);
   VbbHcc_tags_H_mass_stack_2->SetBinError(37,0.8808404);
   VbbHcc_tags_H_mass_stack_2->SetBinError(38,1.028159);
   VbbHcc_tags_H_mass_stack_2->SetBinError(39,1.10835);
   VbbHcc_tags_H_mass_stack_2->SetBinError(40,0.9096594);
   VbbHcc_tags_H_mass_stack_2->SetBinError(41,7.303889);
   VbbHcc_tags_H_mass_stack_2->SetEntries(9214);

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
   VbbHcc_tags_H_mass_stack_3->SetBinContent(3,6.803575);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(4,67.93719);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(5,154.6128);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(6,215.6743);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(7,286.6187);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(8,381.8978);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(9,444.4085);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(10,422.915);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(11,420.2149);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(12,425.9234);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(13,401.159);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(14,385.3847);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(15,366.9019);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(16,338.2429);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(17,307.8487);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(18,292.8548);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(19,272.0457);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(20,261.2783);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(21,247.7839);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(22,235.3924);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(23,229.2506);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(24,219.2573);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(25,213.712);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(26,208.8485);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(27,193.4894);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(28,196.7765);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(29,188.9);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(30,179.2979);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(31,173.4799);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(32,171.0275);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(33,168.2678);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(34,162.0518);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(35,154.5972);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(36,159.1961);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(37,155.1201);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(38,149.7422);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(39,138.1818);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(40,137.4003);
   VbbHcc_tags_H_mass_stack_3->SetBinContent(41,5173.608);
   VbbHcc_tags_H_mass_stack_3->SetBinError(3,0.6827509);
   VbbHcc_tags_H_mass_stack_3->SetBinError(4,2.162731);
   VbbHcc_tags_H_mass_stack_3->SetBinError(5,3.250168);
   VbbHcc_tags_H_mass_stack_3->SetBinError(6,3.851368);
   VbbHcc_tags_H_mass_stack_3->SetBinError(7,4.43279);
   VbbHcc_tags_H_mass_stack_3->SetBinError(8,5.167135);
   VbbHcc_tags_H_mass_stack_3->SetBinError(9,5.570667);
   VbbHcc_tags_H_mass_stack_3->SetBinError(10,5.441285);
   VbbHcc_tags_H_mass_stack_3->SetBinError(11,5.422725);
   VbbHcc_tags_H_mass_stack_3->SetBinError(12,5.470776);
   VbbHcc_tags_H_mass_stack_3->SetBinError(13,5.301289);
   VbbHcc_tags_H_mass_stack_3->SetBinError(14,5.187429);
   VbbHcc_tags_H_mass_stack_3->SetBinError(15,5.05716);
   VbbHcc_tags_H_mass_stack_3->SetBinError(16,4.855214);
   VbbHcc_tags_H_mass_stack_3->SetBinError(17,4.621);
   VbbHcc_tags_H_mass_stack_3->SetBinError(18,4.520136);
   VbbHcc_tags_H_mass_stack_3->SetBinError(19,4.33645);
   VbbHcc_tags_H_mass_stack_3->SetBinError(20,4.245972);
   VbbHcc_tags_H_mass_stack_3->SetBinError(21,4.147785);
   VbbHcc_tags_H_mass_stack_3->SetBinError(22,4.041453);
   VbbHcc_tags_H_mass_stack_3->SetBinError(23,3.98169);
   VbbHcc_tags_H_mass_stack_3->SetBinError(24,3.904272);
   VbbHcc_tags_H_mass_stack_3->SetBinError(25,3.849836);
   VbbHcc_tags_H_mass_stack_3->SetBinError(26,3.809919);
   VbbHcc_tags_H_mass_stack_3->SetBinError(27,3.650898);
   VbbHcc_tags_H_mass_stack_3->SetBinError(28,3.689876);
   VbbHcc_tags_H_mass_stack_3->SetBinError(29,3.632064);
   VbbHcc_tags_H_mass_stack_3->SetBinError(30,3.525214);
   VbbHcc_tags_H_mass_stack_3->SetBinError(31,3.470649);
   VbbHcc_tags_H_mass_stack_3->SetBinError(32,3.451955);
   VbbHcc_tags_H_mass_stack_3->SetBinError(33,3.419988);
   VbbHcc_tags_H_mass_stack_3->SetBinError(34,3.368858);
   VbbHcc_tags_H_mass_stack_3->SetBinError(35,3.28946);
   VbbHcc_tags_H_mass_stack_3->SetBinError(36,3.317912);
   VbbHcc_tags_H_mass_stack_3->SetBinError(37,3.29986);
   VbbHcc_tags_H_mass_stack_3->SetBinError(38,3.237388);
   VbbHcc_tags_H_mass_stack_3->SetBinError(39,3.100536);
   VbbHcc_tags_H_mass_stack_3->SetBinError(40,3.102227);
   VbbHcc_tags_H_mass_stack_3->SetBinError(41,18.99448);
   VbbHcc_tags_H_mass_stack_3->SetEntries(221451);

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
   VbbHcc_tags_H_mass_stack_4->SetBinContent(3,2.973199);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(4,14.03689);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(5,18.8524);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(6,30.00407);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(7,43.0334);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(8,62.6065);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(9,84.60581);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(10,94.91018);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(11,57.30404);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(12,53.48832);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(13,43.34827);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(14,40.50847);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(15,38.75988);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(16,48.97602);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(17,38.54605);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(18,28.11301);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(19,35.94708);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(20,30.48543);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(21,30.90975);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(22,29.90916);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(23,31.00341);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(24,27.62221);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(25,31.73105);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(26,25.56812);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(27,31.24773);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(28,21.94935);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(29,37.11039);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(30,29.22485);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(31,26.79923);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(32,24.69273);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(33,26.15925);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(34,23.79751);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(35,28.95721);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(36,17.92601);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(37,24.00622);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(38,16.66303);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(39,24.27102);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(40,20.06571);
   VbbHcc_tags_H_mass_stack_4->SetBinContent(41,838.1175);
   VbbHcc_tags_H_mass_stack_4->SetBinError(3,2.543264);
   VbbHcc_tags_H_mass_stack_4->SetBinError(4,4.7233);
   VbbHcc_tags_H_mass_stack_4->SetBinError(5,2.00161);
   VbbHcc_tags_H_mass_stack_4->SetBinError(6,4.987636);
   VbbHcc_tags_H_mass_stack_4->SetBinError(7,4.597936);
   VbbHcc_tags_H_mass_stack_4->SetBinError(8,5.594858);
   VbbHcc_tags_H_mass_stack_4->SetBinError(9,6.927879);
   VbbHcc_tags_H_mass_stack_4->SetBinError(10,8.472549);
   VbbHcc_tags_H_mass_stack_4->SetBinError(11,6.089072);
   VbbHcc_tags_H_mass_stack_4->SetBinError(12,7.850506);
   VbbHcc_tags_H_mass_stack_4->SetBinError(13,5.764202);
   VbbHcc_tags_H_mass_stack_4->SetBinError(14,5.126481);
   VbbHcc_tags_H_mass_stack_4->SetBinError(15,5.718127);
   VbbHcc_tags_H_mass_stack_4->SetBinError(16,7.964566);
   VbbHcc_tags_H_mass_stack_4->SetBinError(17,5.573033);
   VbbHcc_tags_H_mass_stack_4->SetBinError(18,4.393481);
   VbbHcc_tags_H_mass_stack_4->SetBinError(19,5.935032);
   VbbHcc_tags_H_mass_stack_4->SetBinError(20,5.376712);
   VbbHcc_tags_H_mass_stack_4->SetBinError(21,3.625984);
   VbbHcc_tags_H_mass_stack_4->SetBinError(22,4.982662);
   VbbHcc_tags_H_mass_stack_4->SetBinError(23,4.50888);
   VbbHcc_tags_H_mass_stack_4->SetBinError(24,4.348513);
   VbbHcc_tags_H_mass_stack_4->SetBinError(25,5.130643);
   VbbHcc_tags_H_mass_stack_4->SetBinError(26,3.290321);
   VbbHcc_tags_H_mass_stack_4->SetBinError(27,5.029946);
   VbbHcc_tags_H_mass_stack_4->SetBinError(28,2.131775);
   VbbHcc_tags_H_mass_stack_4->SetBinError(29,6.917581);
   VbbHcc_tags_H_mass_stack_4->SetBinError(30,5.262913);
   VbbHcc_tags_H_mass_stack_4->SetBinError(31,5.288651);
   VbbHcc_tags_H_mass_stack_4->SetBinError(32,4.94109);
   VbbHcc_tags_H_mass_stack_4->SetBinError(33,5.01067);
   VbbHcc_tags_H_mass_stack_4->SetBinError(34,3.301655);
   VbbHcc_tags_H_mass_stack_4->SetBinError(35,5.718624);
   VbbHcc_tags_H_mass_stack_4->SetBinError(36,3.050397);
   VbbHcc_tags_H_mass_stack_4->SetBinError(37,4.888602);
   VbbHcc_tags_H_mass_stack_4->SetBinError(38,1.857225);
   VbbHcc_tags_H_mass_stack_4->SetBinError(39,4.917091);
   VbbHcc_tags_H_mass_stack_4->SetBinError(40,3.964008);
   VbbHcc_tags_H_mass_stack_4->SetBinError(41,18.76378);
   VbbHcc_tags_H_mass_stack_4->SetEntries(14977);

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
   VbbHcc_tags_H_mass_stack_5->SetBinContent(4,7.86092);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(5,1.889598);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(6,1.786832);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(7,2.859074);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(8,2.266739);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(9,3.687269);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(10,4.954434);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(11,3.2844);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(12,5.11028);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(13,4.525942);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(14,2.010503);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(15,1.542971);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(16,4.77584);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(17,1.820957);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(18,1.980675);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(19,5.071332);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(20,2.021991);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(21,2.804115);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(22,3.77012);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(23,3.236344);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(24,4.995738);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(25,5.312911);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(26,2.368353);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(27,2.780577);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(28,1.627721);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(29,1.391488);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(30,1.134753);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(31,1.551537);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(32,2.174827);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(33,1.67002);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(34,0.9962949);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(35,0.3838465);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(36,1.182091);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(37,2.314935);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(38,1.736364);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(39,2.025335);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(40,0.731362);
   VbbHcc_tags_H_mass_stack_5->SetBinContent(41,96.02438);
   VbbHcc_tags_H_mass_stack_5->SetBinError(4,7.280494);
   VbbHcc_tags_H_mass_stack_5->SetBinError(5,0.6926656);
   VbbHcc_tags_H_mass_stack_5->SetBinError(6,0.5203292);
   VbbHcc_tags_H_mass_stack_5->SetBinError(7,0.7237916);
   VbbHcc_tags_H_mass_stack_5->SetBinError(8,0.5155677);
   VbbHcc_tags_H_mass_stack_5->SetBinError(9,0.6674951);
   VbbHcc_tags_H_mass_stack_5->SetBinError(10,1.668696);
   VbbHcc_tags_H_mass_stack_5->SetBinError(11,1.241148);
   VbbHcc_tags_H_mass_stack_5->SetBinError(12,1.842806);
   VbbHcc_tags_H_mass_stack_5->SetBinError(13,1.463713);
   VbbHcc_tags_H_mass_stack_5->SetBinError(14,0.5212216);
   VbbHcc_tags_H_mass_stack_5->SetBinError(15,0.4218481);
   VbbHcc_tags_H_mass_stack_5->SetBinError(16,1.80513);
   VbbHcc_tags_H_mass_stack_5->SetBinError(17,0.4362324);
   VbbHcc_tags_H_mass_stack_5->SetBinError(18,0.4850705);
   VbbHcc_tags_H_mass_stack_5->SetBinError(19,1.989643);
   VbbHcc_tags_H_mass_stack_5->SetBinError(20,0.4597468);
   VbbHcc_tags_H_mass_stack_5->SetBinError(21,1.193138);
   VbbHcc_tags_H_mass_stack_5->SetBinError(22,1.603261);
   VbbHcc_tags_H_mass_stack_5->SetBinError(23,1.231863);
   VbbHcc_tags_H_mass_stack_5->SetBinError(24,1.710114);
   VbbHcc_tags_H_mass_stack_5->SetBinError(25,2.050002);
   VbbHcc_tags_H_mass_stack_5->SetBinError(26,1.16511);
   VbbHcc_tags_H_mass_stack_5->SetBinError(27,1.147823);
   VbbHcc_tags_H_mass_stack_5->SetBinError(28,0.5292614);
   VbbHcc_tags_H_mass_stack_5->SetBinError(29,0.4648805);
   VbbHcc_tags_H_mass_stack_5->SetBinError(30,0.3449611);
   VbbHcc_tags_H_mass_stack_5->SetBinError(31,0.4264722);
   VbbHcc_tags_H_mass_stack_5->SetBinError(32,0.5877886);
   VbbHcc_tags_H_mass_stack_5->SetBinError(33,0.5935464);
   VbbHcc_tags_H_mass_stack_5->SetBinError(34,0.334795);
   VbbHcc_tags_H_mass_stack_5->SetBinError(35,0.1930466);
   VbbHcc_tags_H_mass_stack_5->SetBinError(36,0.3603239);
   VbbHcc_tags_H_mass_stack_5->SetBinError(37,1.143953);
   VbbHcc_tags_H_mass_stack_5->SetBinError(38,0.5378114);
   VbbHcc_tags_H_mass_stack_5->SetBinError(39,1.175142);
   VbbHcc_tags_H_mass_stack_5->SetBinError(40,0.2467511);
   VbbHcc_tags_H_mass_stack_5->SetBinError(41,8.878084);
   VbbHcc_tags_H_mass_stack_5->SetEntries(3105);

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
   VbbHcc_tags_H_mass_stack_6->SetBinContent(15,0.139529);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(16,0.1344897);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(17,0.1368996);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(23,0.1552273);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(32,0.1333553);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(33,0.1445668);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(38,0.1587488);
   VbbHcc_tags_H_mass_stack_6->SetBinContent(41,0.5456647);
   VbbHcc_tags_H_mass_stack_6->SetBinError(15,0.139529);
   VbbHcc_tags_H_mass_stack_6->SetBinError(16,0.1344897);
   VbbHcc_tags_H_mass_stack_6->SetBinError(17,0.1368996);
   VbbHcc_tags_H_mass_stack_6->SetBinError(23,0.1552273);
   VbbHcc_tags_H_mass_stack_6->SetBinError(32,0.1333553);
   VbbHcc_tags_H_mass_stack_6->SetBinError(33,0.1445668);
   VbbHcc_tags_H_mass_stack_6->SetBinError(38,0.1587488);
   VbbHcc_tags_H_mass_stack_6->SetBinError(41,0.2793296);
   VbbHcc_tags_H_mass_stack_6->SetEntries(11);

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
   VbbHcc_tags_H_mass_stack_7->SetBinContent(5,0.1181973);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(6,0.09773476);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.2276423);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.3731179);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,0.6041623);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.1105411);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.1162857);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.3587141);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.1151045);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(18,0.1075422);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(19,0.1096857);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(20,0.1275401);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(22,0.11362);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.1245696);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(29,0.1156937);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(30,0.235143);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,2.555975);
   VbbHcc_tags_H_mass_stack_7->SetBinError(5,0.1181973);
   VbbHcc_tags_H_mass_stack_7->SetBinError(6,0.09773476);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.1609675);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.2155807);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,0.2704833);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.1105411);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.1162857);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.2075461);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.1151045);
   VbbHcc_tags_H_mass_stack_7->SetBinError(18,0.1075422);
   VbbHcc_tags_H_mass_stack_7->SetBinError(19,0.1096857);
   VbbHcc_tags_H_mass_stack_7->SetBinError(20,0.1275401);
   VbbHcc_tags_H_mass_stack_7->SetBinError(22,0.11362);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.1245696);
   VbbHcc_tags_H_mass_stack_7->SetBinError(29,0.1156937);
   VbbHcc_tags_H_mass_stack_7->SetBinError(30,0.166274);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,0.5478167);
   VbbHcc_tags_H_mass_stack_7->SetEntries(48);

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
   VbbHcc_tags_H_mass_stack_8->SetBinContent(5,0.5858875);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(6,1.057905);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(7,1.862018);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(8,2.167945);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(9,0.9667167);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(10,2.350829);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(11,1.064155);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(12,1.862729);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(13,0.3539567);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(14,0.5114335);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(15,0.552429);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(17,0.5272131);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(19,0.5169264);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(20,0.5189503);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(22,0.2558382);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(23,0.8069838);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(24,0.4415648);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(25,0.7846455);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(26,1.040139);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(27,0.4608622);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(28,0.7747952);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(29,0.700667);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(30,0.521541);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(32,0.1482559);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(34,0.8029349);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(35,0.8013378);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(36,0.8060882);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(37,0.5418434);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(38,0.7575472);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(39,1.765138);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(40,0.5291993);
   VbbHcc_tags_H_mass_stack_8->SetBinContent(41,18.50113);
   VbbHcc_tags_H_mass_stack_8->SetBinError(5,0.4142866);
   VbbHcc_tags_H_mass_stack_8->SetBinError(6,0.5296899);
   VbbHcc_tags_H_mass_stack_8->SetBinError(7,0.7049799);
   VbbHcc_tags_H_mass_stack_8->SetBinError(8,0.767758);
   VbbHcc_tags_H_mass_stack_8->SetBinError(9,0.4861051);
   VbbHcc_tags_H_mass_stack_8->SetBinError(10,0.7857966);
   VbbHcc_tags_H_mass_stack_8->SetBinError(11,0.5322932);
   VbbHcc_tags_H_mass_stack_8->SetBinError(12,0.7051045);
   VbbHcc_tags_H_mass_stack_8->SetBinError(13,0.2737329);
   VbbHcc_tags_H_mass_stack_8->SetBinError(14,0.3616483);
   VbbHcc_tags_H_mass_stack_8->SetBinError(15,0.3911087);
   VbbHcc_tags_H_mass_stack_8->SetBinError(17,0.372819);
   VbbHcc_tags_H_mass_stack_8->SetBinError(19,0.3655358);
   VbbHcc_tags_H_mass_stack_8->SetBinError(20,0.3669995);
   VbbHcc_tags_H_mass_stack_8->SetBinError(22,0.2558382);
   VbbHcc_tags_H_mass_stack_8->SetBinError(23,0.4668993);
   VbbHcc_tags_H_mass_stack_8->SetBinError(24,0.3173349);
   VbbHcc_tags_H_mass_stack_8->SetBinError(25,0.4530845);
   VbbHcc_tags_H_mass_stack_8->SetBinError(26,0.5230229);
   VbbHcc_tags_H_mass_stack_8->SetBinError(27,0.3277801);
   VbbHcc_tags_H_mass_stack_8->SetBinError(28,0.4473913);
   VbbHcc_tags_H_mass_stack_8->SetBinError(29,0.4112243);
   VbbHcc_tags_H_mass_stack_8->SetBinError(30,0.3688711);
   VbbHcc_tags_H_mass_stack_8->SetBinError(32,0.1482559);
   VbbHcc_tags_H_mass_stack_8->SetBinError(34,0.4646775);
   VbbHcc_tags_H_mass_stack_8->SetBinError(35,0.4633212);
   VbbHcc_tags_H_mass_stack_8->SetBinError(36,0.466533);
   VbbHcc_tags_H_mass_stack_8->SetBinError(37,0.3832717);
   VbbHcc_tags_H_mass_stack_8->SetBinError(38,0.4379098);
   VbbHcc_tags_H_mass_stack_8->SetBinError(39,0.6681122);
   VbbHcc_tags_H_mass_stack_8->SetBinError(40,0.3744285);
   VbbHcc_tags_H_mass_stack_8->SetBinError(41,2.241306);
   VbbHcc_tags_H_mass_stack_8->SetEntries(173);

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
   VbbHcc_tags_H_mass_stack_9->SetBinContent(3,0.007714519);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(4,0.05644492);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(5,0.1578694);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(6,0.3203473);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(7,0.7286875);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(8,1.485148);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(9,2.212756);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(10,2.074573);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(11,1.616422);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(12,1.478949);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(13,1.309662);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(14,0.9199247);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(15,0.6209581);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(16,0.489648);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(17,0.4509471);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(18,0.456512);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(19,0.4420274);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(20,0.4320648);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(21,0.4216048);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(22,0.4228822);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(23,0.4051035);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(24,0.4832397);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(25,0.4814833);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(26,0.4372704);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(27,0.4160632);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(28,0.433456);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(29,0.5049419);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(30,0.4636353);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(31,0.5089855);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(32,0.4732252);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(33,0.4872378);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(34,0.4889588);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(35,0.4402198);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(36,0.4556589);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(37,0.4419234);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(38,0.4163907);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(39,0.4248652);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(40,0.4739434);
   VbbHcc_tags_H_mass_stack_9->SetBinContent(41,16.10508);
   VbbHcc_tags_H_mass_stack_9->SetBinError(3,0.003456029);
   VbbHcc_tags_H_mass_stack_9->SetBinError(4,0.009230073);
   VbbHcc_tags_H_mass_stack_9->SetBinError(5,0.01566585);
   VbbHcc_tags_H_mass_stack_9->SetBinError(6,0.02223494);
   VbbHcc_tags_H_mass_stack_9->SetBinError(7,0.03346593);
   VbbHcc_tags_H_mass_stack_9->SetBinError(8,0.04868928);
   VbbHcc_tags_H_mass_stack_9->SetBinError(9,0.05861052);
   VbbHcc_tags_H_mass_stack_9->SetBinError(10,0.05703501);
   VbbHcc_tags_H_mass_stack_9->SetBinError(11,0.04969057);
   VbbHcc_tags_H_mass_stack_9->SetBinError(12,0.04811334);
   VbbHcc_tags_H_mass_stack_9->SetBinError(13,0.04485434);
   VbbHcc_tags_H_mass_stack_9->SetBinError(14,0.03781484);
   VbbHcc_tags_H_mass_stack_9->SetBinError(15,0.03092071);
   VbbHcc_tags_H_mass_stack_9->SetBinError(16,0.0272903);
   VbbHcc_tags_H_mass_stack_9->SetBinError(17,0.02658488);
   VbbHcc_tags_H_mass_stack_9->SetBinError(18,0.02629513);
   VbbHcc_tags_H_mass_stack_9->SetBinError(19,0.02592677);
   VbbHcc_tags_H_mass_stack_9->SetBinError(20,0.02562583);
   VbbHcc_tags_H_mass_stack_9->SetBinError(21,0.02563059);
   VbbHcc_tags_H_mass_stack_9->SetBinError(22,0.02525902);
   VbbHcc_tags_H_mass_stack_9->SetBinError(23,0.02506764);
   VbbHcc_tags_H_mass_stack_9->SetBinError(24,0.02746876);
   VbbHcc_tags_H_mass_stack_9->SetBinError(25,0.0272751);
   VbbHcc_tags_H_mass_stack_9->SetBinError(26,0.02596877);
   VbbHcc_tags_H_mass_stack_9->SetBinError(27,0.02552289);
   VbbHcc_tags_H_mass_stack_9->SetBinError(28,0.02622912);
   VbbHcc_tags_H_mass_stack_9->SetBinError(29,0.02749651);
   VbbHcc_tags_H_mass_stack_9->SetBinError(30,0.02678263);
   VbbHcc_tags_H_mass_stack_9->SetBinError(31,0.02802944);
   VbbHcc_tags_H_mass_stack_9->SetBinError(32,0.02755043);
   VbbHcc_tags_H_mass_stack_9->SetBinError(33,0.02729896);
   VbbHcc_tags_H_mass_stack_9->SetBinError(34,0.02770468);
   VbbHcc_tags_H_mass_stack_9->SetBinError(35,0.02630579);
   VbbHcc_tags_H_mass_stack_9->SetBinError(36,0.02664999);
   VbbHcc_tags_H_mass_stack_9->SetBinError(37,0.02638363);
   VbbHcc_tags_H_mass_stack_9->SetBinError(38,0.02539669);
   VbbHcc_tags_H_mass_stack_9->SetBinError(39,0.02557562);
   VbbHcc_tags_H_mass_stack_9->SetBinError(40,0.02704432);
   VbbHcc_tags_H_mass_stack_9->SetBinError(41,0.1583182);
   VbbHcc_tags_H_mass_stack_9->SetEntries(28234);

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
   VbbHcc_tags_H_mass_stack_10->SetBinContent(3,0.002407893);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(4,0.02027226);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(5,0.067492);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(6,0.1269228);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(7,0.3265358);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(8,0.6710792);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(9,1.019384);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(10,0.9609301);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(11,0.7682942);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(12,0.6871557);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(13,0.6166731);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(14,0.4707117);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(15,0.3374711);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(16,0.2564615);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(17,0.2450751);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(18,0.236346);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(19,0.2337998);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(20,0.2423331);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(21,0.226062);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(22,0.2457846);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(23,0.2510242);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(24,0.24375);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(25,0.2383162);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(26,0.2334529);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(27,0.2310264);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(28,0.2350211);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(29,0.2258457);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(30,0.2272004);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(31,0.2296372);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(32,0.2120395);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(33,0.2302532);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(34,0.2243768);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(35,0.2053359);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(36,0.2134563);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(37,0.2102009);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(38,0.2124434);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(39,0.2064069);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(40,0.2100695);
   VbbHcc_tags_H_mass_stack_10->SetBinContent(41,6.895598);
   VbbHcc_tags_H_mass_stack_10->SetBinError(3,0.0009864912);
   VbbHcc_tags_H_mass_stack_10->SetBinError(4,0.002786954);
   VbbHcc_tags_H_mass_stack_10->SetBinError(5,0.005091361);
   VbbHcc_tags_H_mass_stack_10->SetBinError(6,0.007027558);
   VbbHcc_tags_H_mass_stack_10->SetBinError(7,0.01122144);
   VbbHcc_tags_H_mass_stack_10->SetBinError(8,0.01615365);
   VbbHcc_tags_H_mass_stack_10->SetBinError(9,0.01986858);
   VbbHcc_tags_H_mass_stack_10->SetBinError(10,0.0192782);
   VbbHcc_tags_H_mass_stack_10->SetBinError(11,0.01724283);
   VbbHcc_tags_H_mass_stack_10->SetBinError(12,0.01631223);
   VbbHcc_tags_H_mass_stack_10->SetBinError(13,0.01542767);
   VbbHcc_tags_H_mass_stack_10->SetBinError(14,0.01351708);
   VbbHcc_tags_H_mass_stack_10->SetBinError(15,0.01142571);
   VbbHcc_tags_H_mass_stack_10->SetBinError(16,0.009964729);
   VbbHcc_tags_H_mass_stack_10->SetBinError(17,0.009736399);
   VbbHcc_tags_H_mass_stack_10->SetBinError(18,0.009599002);
   VbbHcc_tags_H_mass_stack_10->SetBinError(19,0.009509742);
   VbbHcc_tags_H_mass_stack_10->SetBinError(20,0.009703644);
   VbbHcc_tags_H_mass_stack_10->SetBinError(21,0.009344992);
   VbbHcc_tags_H_mass_stack_10->SetBinError(22,0.0097512);
   VbbHcc_tags_H_mass_stack_10->SetBinError(23,0.009854234);
   VbbHcc_tags_H_mass_stack_10->SetBinError(24,0.009726536);
   VbbHcc_tags_H_mass_stack_10->SetBinError(25,0.009610909);
   VbbHcc_tags_H_mass_stack_10->SetBinError(26,0.009523534);
   VbbHcc_tags_H_mass_stack_10->SetBinError(27,0.009447904);
   VbbHcc_tags_H_mass_stack_10->SetBinError(28,0.009522957);
   VbbHcc_tags_H_mass_stack_10->SetBinError(29,0.00936383);
   VbbHcc_tags_H_mass_stack_10->SetBinError(30,0.009397786);
   VbbHcc_tags_H_mass_stack_10->SetBinError(31,0.009453706);
   VbbHcc_tags_H_mass_stack_10->SetBinError(32,0.009057604);
   VbbHcc_tags_H_mass_stack_10->SetBinError(33,0.009465961);
   VbbHcc_tags_H_mass_stack_10->SetBinError(34,0.009349246);
   VbbHcc_tags_H_mass_stack_10->SetBinError(35,0.008902933);
   VbbHcc_tags_H_mass_stack_10->SetBinError(36,0.009087309);
   VbbHcc_tags_H_mass_stack_10->SetBinError(37,0.009070868);
   VbbHcc_tags_H_mass_stack_10->SetBinError(38,0.009076357);
   VbbHcc_tags_H_mass_stack_10->SetBinError(39,0.008945033);
   VbbHcc_tags_H_mass_stack_10->SetBinError(40,0.00901667);
   VbbHcc_tags_H_mass_stack_10->SetBinError(41,0.05166363);
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
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.002872786);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.005401085);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.009098332);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.002821306);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.005995116);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.002928512);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.002869221);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.009323252);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.002933425);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.002817849);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.003126194);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(27,0.003218024);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(32,0.002965507);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(33,0.008846202);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.002862625);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.03661673);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002872786);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.003830529);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.005257701);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.002821306);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.004243056);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.002928512);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.002869221);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.005390766);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.002933425);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.002817849);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.003126194);
   VbbHcc_tags_H_mass_stack_11->SetBinError(27,0.003218024);
   VbbHcc_tags_H_mass_stack_11->SetBinError(32,0.002965507);
   VbbHcc_tags_H_mass_stack_11->SetBinError(33,0.00510783);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.002862625);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.01018395);
   VbbHcc_tags_H_mass_stack_11->SetEntries(36);

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
   VbbHcc_tags_H_mass_stack_12->SetBinContent(4,0.0003876622);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(6,0.000379472);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(7,0.0002266955);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(8,0.0007813111);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(9,0.0004180535);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(10,0.002217597);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(11,0.00223161);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(12,0.003254793);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(13,0.003599575);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(14,0.005172756);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(15,0.00256474);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(16,0.0003961915);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(17,0.001152326);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(18,0.0007627948);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(19,0.0003876622);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(22,0.000406932);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(23,0.0007823393);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(24,0.0003912579);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(25,0.0007494697);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(27,0.0004220788);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(30,0.0003747978);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(31,0.001178799);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(32,0.000383191);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(33,0.0007653362);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(34,0.001146433);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(36,0.0007660558);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(37,0.0003865889);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(38,0.000375165);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(39,0.0003915395);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(40,0.000375922);
   VbbHcc_tags_H_mass_stack_12->SetBinContent(41,0.01523346);
   VbbHcc_tags_H_mass_stack_12->SetBinError(4,0.0003876622);
   VbbHcc_tags_H_mass_stack_12->SetBinError(6,0.000379472);
   VbbHcc_tags_H_mass_stack_12->SetBinError(7,0.0002266955);
   VbbHcc_tags_H_mass_stack_12->SetBinError(8,0.0005524718);
   VbbHcc_tags_H_mass_stack_12->SetBinError(9,0.0004180535);
   VbbHcc_tags_H_mass_stack_12->SetBinError(10,0.0009064539);
   VbbHcc_tags_H_mass_stack_12->SetBinError(11,0.0009156375);
   VbbHcc_tags_H_mass_stack_12->SetBinError(12,0.001111109);
   VbbHcc_tags_H_mass_stack_12->SetBinError(13,0.001146529);
   VbbHcc_tags_H_mass_stack_12->SetBinError(14,0.001437263);
   VbbHcc_tags_H_mass_stack_12->SetBinError(15,0.0009738051);
   VbbHcc_tags_H_mass_stack_12->SetBinError(16,0.0003961915);
   VbbHcc_tags_H_mass_stack_12->SetBinError(17,0.0006654502);
   VbbHcc_tags_H_mass_stack_12->SetBinError(18,0.0005393833);
   VbbHcc_tags_H_mass_stack_12->SetBinError(19,0.0003876622);
   VbbHcc_tags_H_mass_stack_12->SetBinError(22,0.000406932);
   VbbHcc_tags_H_mass_stack_12->SetBinError(23,0.000553243);
   VbbHcc_tags_H_mass_stack_12->SetBinError(24,0.0003912579);
   VbbHcc_tags_H_mass_stack_12->SetBinError(25,0.0005299562);
   VbbHcc_tags_H_mass_stack_12->SetBinError(27,0.0004220788);
   VbbHcc_tags_H_mass_stack_12->SetBinError(30,0.0003747978);
   VbbHcc_tags_H_mass_stack_12->SetBinError(31,0.0006820016);
   VbbHcc_tags_H_mass_stack_12->SetBinError(32,0.000383191);
   VbbHcc_tags_H_mass_stack_12->SetBinError(33,0.0005418836);
   VbbHcc_tags_H_mass_stack_12->SetBinError(34,0.0006620512);
   VbbHcc_tags_H_mass_stack_12->SetBinError(36,0.0005418083);
   VbbHcc_tags_H_mass_stack_12->SetBinError(37,0.0003865889);
   VbbHcc_tags_H_mass_stack_12->SetBinError(38,0.000375165);
   VbbHcc_tags_H_mass_stack_12->SetBinError(39,0.0003915395);
   VbbHcc_tags_H_mass_stack_12->SetBinError(40,0.000375922);
   VbbHcc_tags_H_mass_stack_12->SetBinError(41,0.002415734);
   VbbHcc_tags_H_mass_stack_12->SetEntries(127);

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
   
   TH1D *VbbHcc_tags_H_mass__12 = new TH1D("VbbHcc_tags_H_mass__12","",40,0,400);
   VbbHcc_tags_H_mass__12->SetBinContent(3,39);
   VbbHcc_tags_H_mass__12->SetBinContent(4,642);
   VbbHcc_tags_H_mass__12->SetBinContent(5,1557);
   VbbHcc_tags_H_mass__12->SetBinContent(6,2097);
   VbbHcc_tags_H_mass__12->SetBinContent(7,2370);
   VbbHcc_tags_H_mass__12->SetBinContent(15,2022);
   VbbHcc_tags_H_mass__12->SetBinContent(16,1972);
   VbbHcc_tags_H_mass__12->SetBinContent(17,1786);
   VbbHcc_tags_H_mass__12->SetBinContent(18,1761);
   VbbHcc_tags_H_mass__12->SetBinContent(19,1730);
   VbbHcc_tags_H_mass__12->SetBinContent(20,1581);
   VbbHcc_tags_H_mass__12->SetBinContent(21,1560);
   VbbHcc_tags_H_mass__12->SetBinContent(22,1493);
   VbbHcc_tags_H_mass__12->SetBinContent(23,1408);
   VbbHcc_tags_H_mass__12->SetBinContent(24,1428);
   VbbHcc_tags_H_mass__12->SetBinContent(25,1357);
   VbbHcc_tags_H_mass__12->SetBinContent(26,1274);
   VbbHcc_tags_H_mass__12->SetBinContent(27,1303);
   VbbHcc_tags_H_mass__12->SetBinContent(28,1149);
   VbbHcc_tags_H_mass__12->SetBinContent(29,1212);
   VbbHcc_tags_H_mass__12->SetBinContent(30,1160);
   VbbHcc_tags_H_mass__12->SetBinContent(31,1134);
   VbbHcc_tags_H_mass__12->SetBinContent(32,1150);
   VbbHcc_tags_H_mass__12->SetBinContent(33,1087);
   VbbHcc_tags_H_mass__12->SetBinContent(34,1043);
   VbbHcc_tags_H_mass__12->SetBinContent(35,1040);
   VbbHcc_tags_H_mass__12->SetBinContent(36,1078);
   VbbHcc_tags_H_mass__12->SetBinContent(37,943);
   VbbHcc_tags_H_mass__12->SetBinContent(38,904);
   VbbHcc_tags_H_mass__12->SetBinContent(39,893);
   VbbHcc_tags_H_mass__12->SetBinContent(40,898);
   VbbHcc_tags_H_mass__12->SetBinContent(41,39766);
   VbbHcc_tags_H_mass__12->SetEntries(97224);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_mass__12->SetLineColor(ci);
   VbbHcc_tags_H_mass__12->SetLineWidth(2);
   VbbHcc_tags_H_mass__12->SetMarkerStyle(20);
   VbbHcc_tags_H_mass__12->SetMarkerSize(1.2);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetRange(1,400);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass__12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass__12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass__12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__12->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_H_mass_fx1009[40] = {
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
   Double_t Graph_from_VbbHcc_tags_H_mass_fy1009[40] = {
   0,
   0,
   364.2785,
   4419.841,
   3522.514,
   6403.241,
   5034.544,
   5185.801,
   5105.272,
   5261.595,
   2548.49,
   3271.694,
   3038.358,
   5419.317,
   5748.375,
   5352.847,
   4151.525,
   4972.092,
   3055.244,
   3215.576,
   2373.769,
   2985.861,
   2840.769,
   3367.389,
   3986.643,
   3053.228,
   3054.519,
   3790.162,
   2544.111,
   2542.911,
   1694.767,
   2995.775,
   1472.317,
   2049.25,
   3280.983,
   1842.788,
   3724.655,
   3765.429,
   1485.765,
   2766.83};
   Double_t Graph_from_VbbHcc_tags_H_mass_fex1009[40] = {
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
   Double_t Graph_from_VbbHcc_tags_H_mass_fey1009[40] = {
   0,
   0,
   317.8286,
   2303.81,
   855.452,
   1183.596,
   924.6881,
   932.6802,
   959.993,
   956.8308,
   474.2765,
   597.3203,
   605.6886,
   1832.84,
   1841.725,
   1702.092,
   1790.967,
   1677.23,
   771.5218,
   727.434,
   583.3106,
   1572.708,
   680.4291,
   1770.881,
   942.4561,
   720.8911,
   802.6855,
   1639.868,
   707.3743,
   682.5109,
   463.0221,
   796.1496,
   492.1928,
   594.6277,
   1780.09,
   548.7715,
   1650.599,
   1688.87,
   473.9926,
   694.5809};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_VbbHcc_tags_H_mass_fx1009,Graph_from_VbbHcc_tags_H_mass_fy1009,Graph_from_VbbHcc_tags_H_mass_fex1009,Graph_from_VbbHcc_tags_H_mass_fey1009);
   gre->SetName("Graph_from_VbbHcc_tags_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_H_mass1009 = new TH1F("Graph_Graph_from_VbbHcc_tags_H_mass1009","",100,0,440);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetMaximum(8349.11);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_H_mass1009->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_H_mass1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_H_mass1009);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_mass","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tags_16->cd();
  
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
   
   TH1D *data_mc_ratio__13 = new TH1D("data_mc_ratio__13","",40,0,400);
   data_mc_ratio__13->SetBinContent(3,0.1070609);
   data_mc_ratio__13->SetBinContent(4,0.1452541);
   data_mc_ratio__13->SetBinContent(5,0.4420138);
   data_mc_ratio__13->SetBinContent(6,0.3274904);
   data_mc_ratio__13->SetBinContent(7,0.4707477);
   data_mc_ratio__13->SetBinContent(8,0.4859423);
   data_mc_ratio__13->SetBinContent(9,0.4975249);
   data_mc_ratio__13->SetBinContent(10,0.4475829);
   data_mc_ratio__13->SetBinContent(11,0.8887615);
   data_mc_ratio__13->SetBinContent(12,0.7176711);
   data_mc_ratio__13->SetBinContent(13,0.720784);
   data_mc_ratio__13->SetBinContent(14,0.3930384);
   data_mc_ratio__13->SetBinContent(15,0.3517516);
   data_mc_ratio__13->SetBinContent(16,0.3684021);
   data_mc_ratio__13->SetBinContent(17,0.4302034);
   data_mc_ratio__13->SetBinContent(18,0.3541769);
   data_mc_ratio__13->SetBinContent(19,0.5662395);
   data_mc_ratio__13->SetBinContent(20,0.4916692);
   data_mc_ratio__13->SetBinContent(21,0.6571827);
   data_mc_ratio__13->SetBinContent(22,0.5000233);
   data_mc_ratio__13->SetBinContent(23,0.4956405);
   data_mc_ratio__13->SetBinContent(24,0.4240674);
   data_mc_ratio__13->SetBinContent(25,0.3403866);
   data_mc_ratio__13->SetBinContent(26,0.4172633);
   data_mc_ratio__13->SetBinContent(27,0.4265811);
   data_mc_ratio__13->SetBinContent(28,0.3031533);
   data_mc_ratio__13->SetBinContent(29,0.4763944);
   data_mc_ratio__13->SetBinContent(30,0.4561702);
   data_mc_ratio__13->SetBinContent(31,0.6691186);
   data_mc_ratio__13->SetBinContent(32,0.383874);
   data_mc_ratio__13->SetBinContent(33,0.7382922);
   data_mc_ratio__13->SetBinContent(34,0.5089667);
   data_mc_ratio__13->SetBinContent(35,0.3169782);
   data_mc_ratio__13->SetBinContent(36,0.5849832);
   data_mc_ratio__13->SetBinContent(37,0.2531778);
   data_mc_ratio__13->SetBinContent(38,0.2400789);
   data_mc_ratio__13->SetBinContent(39,0.6010371);
   data_mc_ratio__13->SetBinContent(40,0.3245591);
   data_mc_ratio__13->SetBinContent(41,0.5770364);
   data_mc_ratio__13->SetBinError(3,0.01714347);
   data_mc_ratio__13->SetBinError(4,0.005732722);
   data_mc_ratio__13->SetBinError(5,0.0112019);
   data_mc_ratio__13->SetBinError(6,0.007151536);
   data_mc_ratio__13->SetBinError(7,0.009669722);
   data_mc_ratio__13->SetBinError(8,0.009680203);
   data_mc_ratio__13->SetBinError(9,0.009871837);
   data_mc_ratio__13->SetBinError(10,0.009223124);
   data_mc_ratio__13->SetBinError(11,0.01867459);
   data_mc_ratio__13->SetBinError(12,0.01481073);
   data_mc_ratio__13->SetBinError(13,0.01540221);
   data_mc_ratio__13->SetBinError(14,0.008516188);
   data_mc_ratio__13->SetBinError(15,0.007822498);
   data_mc_ratio__13->SetBinError(16,0.008295997);
   data_mc_ratio__13->SetBinError(17,0.01017966);
   data_mc_ratio__13->SetBinError(18,0.008439962);
   data_mc_ratio__13->SetBinError(19,0.01361373);
   data_mc_ratio__13->SetBinError(20,0.01236537);
   data_mc_ratio__13->SetBinError(21,0.01663887);
   data_mc_ratio__13->SetBinError(22,0.01294078);
   data_mc_ratio__13->SetBinError(23,0.01320886);
   data_mc_ratio__13->SetBinError(24,0.01122201);
   data_mc_ratio__13->SetBinError(25,0.009240225);
   data_mc_ratio__13->SetBinError(26,0.0116903);
   data_mc_ratio__13->SetBinError(27,0.0118176);
   data_mc_ratio__13->SetBinError(28,0.008943392);
   data_mc_ratio__13->SetBinError(29,0.01368407);
   data_mc_ratio__13->SetBinError(30,0.01339362);
   data_mc_ratio__13->SetBinError(31,0.01986994);
   data_mc_ratio__13->SetBinError(32,0.01131983);
   data_mc_ratio__13->SetBinError(33,0.02239306);
   data_mc_ratio__13->SetBinError(34,0.01575967);
   data_mc_ratio__13->SetBinError(35,0.009829076);
   data_mc_ratio__13->SetBinError(36,0.01781698);
   data_mc_ratio__13->SetBinError(37,0.008244603);
   data_mc_ratio__13->SetBinError(38,0.007984906);
   data_mc_ratio__13->SetBinError(39,0.02011294);
   data_mc_ratio__13->SetBinError(40,0.01083068);
   data_mc_ratio__13->SetBinError(41,0.03383643);
   data_mc_ratio__13->SetMinimum(0.4);
   data_mc_ratio__13->SetMaximum(1.6);
   data_mc_ratio__13->SetEntries(400.6827);
   data_mc_ratio__13->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__13->SetLineColor(ci);
   data_mc_ratio__13->SetLineWidth(2);
   data_mc_ratio__13->SetMarkerStyle(20);
   data_mc_ratio__13->SetMarkerSize(1.2);
   data_mc_ratio__13->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__13->GetXaxis()->SetRange(1,30);
   data_mc_ratio__13->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__13->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__13->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__13->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__13->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__13->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__13->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__13->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__13->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__13->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__13->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__13->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__13->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__13->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__13->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__13->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__13->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1010[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1010[40] = {
   0,
   0,
   0.8724878,
   0.5212427,
   0.2428527,
   0.1848432,
   0.1836687,
   0.1798527,
   0.1880395,
   0.1818519,
   0.186101,
   0.1825722,
   0.1993473,
   0.338205,
   0.3203906,
   0.3179787,
   0.4313998,
   0.3373288,
   0.2525238,
   0.226222,
   0.2457318,
   0.5267185,
   0.2395229,
   0.5258915,
   0.2364034,
   0.2361079,
   0.2627862,
   0.4326645,
   0.2780438,
   0.2683975,
   0.273207,
   0.2657575,
   0.3342982,
   0.2901684,
   0.5425478,
   0.2977942,
   0.4431547,
   0.4485201,
   0.3190225,
   0.2510385};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1010,Graph_from_mc_statistical_error_fy1010,Graph_from_mc_statistical_error_fex1010,Graph_from_mc_statistical_error_fey1010);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1010 = new TH1F("Graph_Graph_from_mc_statistical_error1010","",100,0,440);
   Graph_Graph_from_mc_statistical_error1010->SetMinimum(0.1147609);
   Graph_Graph_from_mc_statistical_error1010->SetMaximum(2.046985);
   Graph_Graph_from_mc_statistical_error1010->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1010->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1010->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1010);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}
