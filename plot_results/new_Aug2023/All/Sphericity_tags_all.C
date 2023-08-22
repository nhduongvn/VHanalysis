void Sphericity_tags_all()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Tue Aug 22 09:20:44 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_all = new TCanvas("Sphericity_tags_all", "Sphericity_tags_all",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_all->SetHighLightColor(2);
   Sphericity_tags_all->Range(0,0,1,1);
   Sphericity_tags_all->SetFillColor(0);
   Sphericity_tags_all->SetFillStyle(4000);
   Sphericity_tags_all->SetBorderMode(0);
   Sphericity_tags_all->SetBorderSize(2);
   Sphericity_tags_all->SetFrameFillStyle(1000);
   Sphericity_tags_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-534.3431,1.052419,534108.8);
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
   st->SetMaximum(457756.6);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(0.3);
   st_stack_60->SetMaximum(480644.5);
   st_stack_60->SetDirectory(0);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->GetXaxis()->SetRange(1,25);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetLabelSize(0.035);
   st_stack_60->GetXaxis()->SetTitleSize(0.035);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Events/0.04");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetLabelSize(0.05);
   st_stack_60->GetYaxis()->SetTitleSize(0.057);
   st_stack_60->GetYaxis()->SetTitleOffset(1.2);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetLabelSize(0.035);
   st_stack_60->GetZaxis()->SetTitleSize(0.035);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_1 = new TH1D("VbbHcc_tags_Sphericity_all_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,183878.6);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,145210.7);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,83112.46);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,50213.94);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,45890.86);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,15730.97);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,6720.776);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,4393.745);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,2398.464);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,1675.123);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,1587.464);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,626.6984);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,632.8021);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,318.8715);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,492.8937);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,377.226);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,191.3236);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,67.63175);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(19,85.66139);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,17642.61);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,5953.277);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,4292.284);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,3133.56);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,20709.43);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,1928.778);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,1095.263);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,761.5922);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,595.5776);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,390.4331);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,476.3875);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,104.4246);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,106.9058);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,79.09547);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,95.86539);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,78.18605);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,65.45489);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,18.60972);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(19,36.4651);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(27568);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_2 = new TH1D("VbbHcc_tags_Sphericity_all_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,895.815);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,675.5306);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,407.7239);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,245.4167);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,140.4312);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,80.93593);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,51.14527);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,28.82116);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,21.0311);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,16.31436);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,9.225406);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,7.627864);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,6.139934);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,4.097283);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,4.271769);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,2.553992);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,2.487339);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,0.9812005);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,0.2272001);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,-0.05354825);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(21,0.0318223);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,12.54786);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,10.82409);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,8.636346);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,6.669027);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,5.068818);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,3.830699);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,3.046656);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,2.370488);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,1.966749);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,1.836481);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,1.305816);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,1.217488);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,1.068416);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,0.7663819);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,0.9123199);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,0.6517275);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,0.7251377);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,0.4471584);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,0.1134982);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.05354825);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(21,0.0318223);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(34548);

   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_2,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_3 = new TH1D("VbbHcc_tags_Sphericity_all_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(1,18257.66);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(2,15117.37);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(3,8604.706);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(4,5014.749);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(5,2915.113);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(6,1707.817);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(7,1014.014);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(8,628.7766);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(9,426.9714);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(10,292.6636);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(11,207.8942);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(12,152.3354);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(13,109.589);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(14,83.68941);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(15,64.37737);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(16,50.57565);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(17,34.87262);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(18,22.41982);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(19,12.84498);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(20,5.382696);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(21,1.965994);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(22,0.6168545);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(1,36.84132);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(2,32.94656);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(3,24.81089);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(4,19.35005);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(5,14.22846);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(6,11.12216);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(7,9.083486);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(8,6.732593);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(9,6.084527);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(10,4.549944);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(11,3.945148);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(12,3.213022);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(13,2.748812);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(14,2.387714);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(15,2.091666);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(16,2.033171);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(17,1.524658);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(18,1.219416);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(19,0.9302983);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(20,0.5981375);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(21,0.3768627);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(22,0.2227888);
   VbbHcc_tags_Sphericity_all_stack_3->SetEntries(905703);

   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_3->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_3,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_4 = new TH1D("VbbHcc_tags_Sphericity_all_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(1,2554.292);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(2,1955.308);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(3,1121.646);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(4,704.9058);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(5,397.3989);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(6,207.8916);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(7,113.7331);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(8,62.79027);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(9,47.71754);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(10,34.25875);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(11,22.80188);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(12,20.31382);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(13,14.16712);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(14,12.86843);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(15,8.898952);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(16,6.505435);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(17,5.015784);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(18,2.616283);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(19,1.790419);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(20,0.4690613);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(21,0.2211417);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(1,38.5955);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(2,32.39702);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(3,23.2748);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(4,18.94028);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(5,13.62273);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(6,8.732602);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(7,6.672184);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(8,3.538442);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(9,3.158653);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(10,2.858545);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(11,2.197677);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(12,2.126045);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(13,1.4905);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(14,1.599994);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(15,1.170169);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(16,0.9798783);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(17,0.8715417);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(18,0.5438467);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(19,0.7040922);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(20,0.2113578);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(21,0.129172);
   VbbHcc_tags_Sphericity_all_stack_4->SetEntries(49827);

   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_4->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_4,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_5 = new TH1D("VbbHcc_tags_Sphericity_all_stack_5","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(1,288.2546);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(2,148.6004);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(3,122.419);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(4,49.86434);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(5,38.63414);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(6,24.57202);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(7,14.95957);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(8,10.22627);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(9,4.30632);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(10,4.256817);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(11,2.057822);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(12,2.566597);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(13,3.002054);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(14,7.305618);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(15,0.8253002);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(16,0.5838549);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(17,0.6726555);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(18,0.09238938);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(19,0.2476603);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(20,0.1401813);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(1,17.54411);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(2,8.170185);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(3,11.55187);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(4,4.159205);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(5,3.925843);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(6,4.308433);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(7,2.64158);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(8,1.893137);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(9,0.6985431);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(10,1.072952);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(11,0.5099673);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(12,0.7162711);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(13,0.9100152);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(14,5.153178);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(15,0.2663685);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(16,0.203534);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(17,0.3594177);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(18,0.06652241);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(19,0.1876342);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(20,0.1401813);
   VbbHcc_tags_Sphericity_all_stack_5->SetEntries(7212);

   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_5->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_5,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_6 = new TH1D("VbbHcc_tags_Sphericity_all_stack_6","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(1,0.977474);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(2,0.3471822);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(3,0.3876837);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(4,1.238563);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(5,0.3551512);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(7,0.07803031);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(8,0.2950387);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(1,0.5532462);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(2,0.2594297);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(3,0.2239242);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(4,0.7465957);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(5,0.2641889);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(7,0.07803031);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(8,0.2950387);
   VbbHcc_tags_Sphericity_all_stack_6->SetEntries(17);

   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Sphericity_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_6->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_6,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_7 = new TH1D("VbbHcc_tags_Sphericity_all_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(1,1.860278);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(2,1.45561);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(3,0.268744);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(4,1.65093);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(5,0.4188964);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(6,0.09227263);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(7,0.265187);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(8,0.2950387);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(9,0.09988796);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(12,0.07873842);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(14,0.07699256);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(1,0.6122127);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(2,0.4127538);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(3,0.1559111);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(4,0.7677926);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(5,0.2688893);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(6,0.09227263);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(7,0.1532356);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(8,0.2950387);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(9,0.09988796);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(12,0.07873842);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(14,0.07699256);
   VbbHcc_tags_Sphericity_all_stack_7->SetEntries(52);

   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_all_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_7->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_7,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_8 = new TH1D("VbbHcc_tags_Sphericity_all_stack_8","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(1,52.20809);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(2,37.59266);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(3,19.58952);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(4,12.35897);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(5,11.4525);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(6,4.047231);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(7,1.062524);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(8,0.2196035);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(9,0.1590457);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(10,0.2804473);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(11,0.7001659);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(12,0.5536798);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(13,0.3451496);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(20,0.315662);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(1,3.755069);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(2,3.168602);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(3,2.279197);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(4,1.802256);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(5,1.81729);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(6,0.9957545);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(7,0.5356124);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(8,0.2196035);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(9,0.1590457);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(10,0.2804473);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(11,0.4163535);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(12,0.391526);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(13,0.3451496);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(20,0.315662);
   VbbHcc_tags_Sphericity_all_stack_8->SetEntries(564);

   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Sphericity_all_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_8->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_8,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_9 = new TH1D("VbbHcc_tags_Sphericity_all_stack_9","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(1,43.66659);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(2,37.15261);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(3,20.34918);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(4,14.31357);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(5,10.00886);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(6,5.220042);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(7,1.996461);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(8,0.922231);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(9,0.570627);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(10,0.4001145);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(11,0.2715068);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(12,0.2219375);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(13,0.1445962);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(14,0.1271273);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(15,0.1015355);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(16,0.08398513);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(17,0.04844972);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(18,0.03292193);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(19,0.02567903);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(20,0.009472132);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(21,0.002711063);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(1,0.3272653);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(2,0.3237254);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(3,0.2199306);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(4,0.1912585);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(5,0.1608075);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(6,0.1104409);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(7,0.06906273);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(8,0.04576544);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(9,0.03461123);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(10,0.03085411);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(11,0.02496253);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(12,0.02339943);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(13,0.01761728);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(14,0.01724027);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(15,0.01512408);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(16,0.01330799);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(17,0.01047073);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(18,0.008310039);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(19,0.007893336);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(20,0.005120963);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(21,0.002711063);
   VbbHcc_tags_Sphericity_all_stack_9->SetEntries(79284);

   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Sphericity_all_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_9->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_9,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_10 = new TH1D("VbbHcc_tags_Sphericity_all_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(1,16.9287);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(2,13.90993);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(3,7.725719);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(4,5.060418);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(5,3.041355);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(6,1.758653);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(7,0.9364152);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(8,0.5233948);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(9,0.3993589);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(10,0.3112577);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(11,0.2064167);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(12,0.1680368);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(13,0.1342207);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(14,0.1057284);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(15,0.1038724);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(16,0.064128);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(17,0.04907465);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(18,0.0396499);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(19,0.01828381);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(20,0.005449629);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(21,0.004025688);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(22,0.00143951);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(23,0.001343052);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(1,0.08756619);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(2,0.07846081);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(3,0.05859453);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(4,0.04748528);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(5,0.03697548);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(6,0.02826866);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(7,0.02071331);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(8,0.01556004);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(9,0.01354958);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(10,0.01206302);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(11,0.009864585);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(12,0.008840888);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(13,0.007925077);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(14,0.006985777);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(15,0.006981948);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(16,0.005500293);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(17,0.004818269);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(18,0.004308441);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(19,0.002931202);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(20,0.001625805);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(21,0.001377197);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(22,0.0008514433);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(23,0.0007943904);
   VbbHcc_tags_Sphericity_all_stack_10->SetEntries(122844);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_all_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_10->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_10,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_11 = new TH1D("VbbHcc_tags_Sphericity_all_stack_11","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(1,0.1318656);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(2,0.1257192);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(3,0.03833904);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(4,0.04484939);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(5,0.0243664);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(6,0.01355623);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(7,0.0037749);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(9,0.002051074);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(10,0.001845983);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(1,0.016378);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(2,0.01650884);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(3,0.008750983);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(4,0.009523281);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(5,0.007371483);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(6,0.004901644);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(7,0.002706356);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(9,0.002051074);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(10,0.001845983);
   VbbHcc_tags_Sphericity_all_stack_11->SetEntries(200);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_all_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_11->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_11,"");
   
   TH1D *VbbHcc_tags_Sphericity_all_stack_12 = new TH1D("VbbHcc_tags_Sphericity_all_stack_12","",25,0,1);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(1,0.06619221);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(2,0.0449708);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(3,0.02376866);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(4,0.0216103);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(5,0.009788049);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(6,0.005157115);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(7,0.003348737);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(8,0.001334501);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(9,0.002561466);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(10,0.0005297123);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(11,0.001945368);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(12,0.001097301);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(13,0.0003289748);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(14,0.0003800235);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(15,0.0003978012);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(1,0.004389857);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(2,0.003511991);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(3,0.00256746);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(4,0.00247594);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(5,0.001622748);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(6,0.00123282);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(7,0.001001474);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(8,0.0005652344);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(9,0.000841092);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(10,0.0003748506);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(11,0.0007431296);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(12,0.000510057);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(13,0.0002752623);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(14,0.0003800235);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(15,0.0003978012);
   VbbHcc_tags_Sphericity_all_stack_12->SetEntries(702);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_all_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all_stack_12->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_all_stack_12,"");
   st->Draw("hist");
   
   TH1D *VbbHcc_tags_Sphericity_all__164 = new TH1D("VbbHcc_tags_Sphericity_all__164","",25,0,1);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(1,163562);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(2,124286);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(3,71409);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(4,42019);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(5,24696);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(6,14094);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(7,7812);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(8,4786);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(9,3321);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(10,2413);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(11,1684);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(12,1239);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(13,996);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(14,737);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(15,595);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(16,457);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(17,343);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(18,243);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(19,109);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(20,42);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(21,16);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(22,7);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(23,1);
   VbbHcc_tags_Sphericity_all__164->SetEntries(464891);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_all__164->SetLineColor(ci);
   VbbHcc_tags_Sphericity_all__164->SetLineWidth(2);
   VbbHcc_tags_Sphericity_all__164->SetMarkerStyle(20);
   VbbHcc_tags_Sphericity_all__164->SetMarkerSize(1.2);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_all__164->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__164->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_all__164->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_all__164->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_all__164->Draw("same E");
   
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fx1119[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fy1119[25] = {
   205990.5,
   163198.1,
   93417.34,
   56263.57,
   49407.75,
   17763.32,
   7918.974,
   5126.616,
   2899.724,
   2023.61,
   1830.623,
   810.5655,
   766.3245,
   427.1425,
   571.4729,
   437.5931,
   234.4695,
   93.81401,
   100.8156,
   6.268974,
   2.225695,
   0.618294,
   0.001343052,
   0,
   0};
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fex1119[25] = {
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
   Double_t Graph_from_VbbHcc_tags_Sphericity_all_fey1119[25] = {
   17642.71,
   5953.472,
   4292.444,
   3133.687,
   20709.44,
   1928.838,
   1095.328,
   761.6364,
   595.6208,
   390.4759,
   476.4111,
   104.506,
   106.9613,
   79.319,
   95.90005,
   78.2216,
   65.48345,
   18.66303,
   36.48441,
   0.7243136,
   0.3996659,
   0.2227905,
   0.0007943904,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_VbbHcc_tags_Sphericity_all_fx1119,Graph_from_VbbHcc_tags_Sphericity_all_fy1119,Graph_from_VbbHcc_tags_Sphericity_all_fex1119,Graph_from_VbbHcc_tags_Sphericity_all_fey1119);
   gre->SetName("Graph_from_VbbHcc_tags_Sphericity_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VbbHcc_tags_Sphericity_all1119 = new TH1F("Graph_Graph_from_VbbHcc_tags_Sphericity_all1119","",100,0,1.1);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetMinimum(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetMaximum(245996.5);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetDirectory(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetLineColor(ci);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VbbHcc_tags_Sphericity_all1119);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_all","Data (JetHT)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_12","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_11","ZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_10","ggZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_9","ZHbb","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_8","ZZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_7","WZ","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_6","WW","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_5","W + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_4","Z + jets","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_2","Single top","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_all_stack_1","QCD","F");

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
   entry=leg->AddEntry("Graph_from_VbbHcc_tags_Sphericity_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Sphericity_tags_all->cd();
  
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
   
   TH1D *data_mc_ratio__165 = new TH1D("data_mc_ratio__165","",25,0,1);
   data_mc_ratio__165->SetBinContent(1,0.794027);
   data_mc_ratio__165->SetBinContent(2,0.7615653);
   data_mc_ratio__165->SetBinContent(3,0.7644084);
   data_mc_ratio__165->SetBinContent(4,0.7468243);
   data_mc_ratio__165->SetBinContent(5,0.4998406);
   data_mc_ratio__165->SetBinContent(6,0.7934326);
   data_mc_ratio__165->SetBinContent(7,0.9864914);
   data_mc_ratio__165->SetBinContent(8,0.9335594);
   data_mc_ratio__165->SetBinContent(9,1.145281);
   data_mc_ratio__165->SetBinContent(10,1.192423);
   data_mc_ratio__165->SetBinContent(11,0.9199053);
   data_mc_ratio__165->SetBinContent(12,1.528562);
   data_mc_ratio__165->SetBinContent(13,1.29971);
   data_mc_ratio__165->SetBinContent(14,1.725419);
   data_mc_ratio__165->SetBinContent(15,1.041169);
   data_mc_ratio__165->SetBinContent(16,1.044349);
   data_mc_ratio__165->SetBinContent(17,1.462877);
   data_mc_ratio__165->SetBinContent(18,2.590231);
   data_mc_ratio__165->SetBinContent(19,1.081182);
   data_mc_ratio__165->SetBinContent(20,6.699661);
   data_mc_ratio__165->SetBinContent(21,7.188765);
   data_mc_ratio__165->SetBinContent(22,11.32148);
   data_mc_ratio__165->SetBinContent(23,744.5727);
   data_mc_ratio__165->SetBinError(1,0.001963333);
   data_mc_ratio__165->SetBinError(2,0.00216021);
   data_mc_ratio__165->SetBinError(3,0.002860546);
   data_mc_ratio__165->SetBinError(4,0.003643305);
   data_mc_ratio__165->SetBinError(5,0.003180667);
   data_mc_ratio__165->SetBinError(6,0.00668333);
   data_mc_ratio__165->SetBinError(7,0.01116123);
   data_mc_ratio__165->SetBinError(8,0.01349446);
   data_mc_ratio__165->SetBinError(9,0.01987365);
   data_mc_ratio__165->SetBinError(10,0.02427458);
   data_mc_ratio__165->SetBinError(11,0.02241672);
   data_mc_ratio__165->SetBinError(12,0.04342577);
   data_mc_ratio__165->SetBinError(13,0.0411829);
   data_mc_ratio__165->SetBinError(14,0.06355664);
   data_mc_ratio__165->SetBinError(15,0.04268377);
   data_mc_ratio__165->SetBinError(16,0.0488526);
   data_mc_ratio__165->SetBinError(17,0.07898792);
   data_mc_ratio__165->SetBinError(18,0.1661634);
   data_mc_ratio__165->SetBinError(19,0.1035584);
   data_mc_ratio__165->SetBinError(20,1.03378);
   data_mc_ratio__165->SetBinError(21,1.797191);
   data_mc_ratio__165->SetBinError(22,4.279116);
   data_mc_ratio__165->SetBinError(23,744.5727);
   data_mc_ratio__165->SetMinimum(0.4);
   data_mc_ratio__165->SetMaximum(1.6);
   data_mc_ratio__165->SetEntries(0.836241);
   data_mc_ratio__165->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__165->SetLineColor(ci);
   data_mc_ratio__165->SetLineWidth(2);
   data_mc_ratio__165->SetMarkerStyle(20);
   data_mc_ratio__165->SetMarkerSize(1.2);
   data_mc_ratio__165->GetXaxis()->SetTitle("Sphericity");
   data_mc_ratio__165->GetXaxis()->SetRange(1,25);
   data_mc_ratio__165->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__165->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__165->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__165->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__165->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__165->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__165->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__165->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__165->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__165->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__165->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__165->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__165->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__165->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__165->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__165->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__165->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1120[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1120[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1120[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1120[25] = {
   0.08564818,
   0.03648004,
   0.04594912,
   0.05569656,
   0.4191537,
   0.1085854,
   0.138317,
   0.1485651,
   0.205406,
   0.1929601,
   0.2602453,
   0.1289297,
   0.139577,
   0.1856968,
   0.1678121,
   0.1787542,
   0.2792834,
   0.1989365,
   0.3618925,
   0.1155394,
   0.179569,
   0.360331,
   0.5914814,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1120,Graph_from_mc_statistical_error_fy1120,Graph_from_mc_statistical_error_fex1120,Graph_from_mc_statistical_error_fey1120);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1120 = new TH1F("Graph_Graph_from_mc_statistical_error1120","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1120->SetMinimum(0.2902223);
   Graph_Graph_from_mc_statistical_error1120->SetMaximum(1.709778);
   Graph_Graph_from_mc_statistical_error1120->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1120->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1120);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->Modified();
   Sphericity_tags_all->cd();
   Sphericity_tags_all->SetSelected(Sphericity_tags_all);
}
