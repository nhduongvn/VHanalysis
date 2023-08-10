void Sphericity_tags_all()
{
//=========Macro generated from canvas: Sphericity_tags_all/Sphericity_tags_all
//=========  (Thu Aug  3 12:23:34 2023) by ROOT version 6.14/09
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
   topPad->Range(-0.1532254,-590.8617,1.052419,590570.8);
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
   st->SetMaximum(506147.3);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",25,0,1);
   st_stack_60->SetMinimum(0.3);
   st_stack_60->SetMaximum(531454.7);
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
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(1,204419.3);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(2,163022.1);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(3,89854.8);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(4,56077.39);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(5,43708.82);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(6,17385.67);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(7,7308.632);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(8,4953.669);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(9,2706.444);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(10,1716.909);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(11,1772.223);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(12,772.4133);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(13,761.4709);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(14,321.6033);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(15,500.4247);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(16,410.7541);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(17,209.5481);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(18,109.1114);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinContent(19,96.67067);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(1,16251.8);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(2,6542.32);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(3,4604.821);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(4,3368.351);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(5,15048.57);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(6,2183.006);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(7,1087.079);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(8,790.4901);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(9,613.5422);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(10,408.7665);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(11,545.535);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(12,112.153);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(13,116.1834);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(14,72.38417);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(15,84.93779);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(16,82.03368);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(17,66.83841);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(18,33.02259);
   VbbHcc_tags_Sphericity_all_stack_1->SetBinError(19,37.26412);
   VbbHcc_tags_Sphericity_all_stack_1->SetEntries(30262);

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
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(1,1025.539);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(2,788.0352);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(3,469.5837);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(4,279.4467);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(5,158.5854);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(6,91.43519);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(7,57.81051);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(8,32.15382);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(9,22.43351);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(10,17.35223);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(11,10.44237);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(12,8.464386);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(13,6.941345);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(14,4.690646);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(15,4.722255);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(16,3.029444);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(17,2.340347);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(18,1.210417);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(19,0.372729);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(20,0.04860075);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinContent(21,0.04712387);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(1,12.77842);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(2,11.12545);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(3,8.664656);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(4,6.730705);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(5,5.113776);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(6,3.881745);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(7,3.097756);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(8,2.301783);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(9,1.92226);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(10,1.749763);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(11,1.307985);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(12,1.183287);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(13,1.063308);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(14,0.8085747);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(15,0.9427486);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(16,0.6751887);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(17,0.6499298);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(18,0.4387092);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(19,0.1319348);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(20,0.04860075);
   VbbHcc_tags_Sphericity_all_stack_2->SetBinError(21,0.04712387);
   VbbHcc_tags_Sphericity_all_stack_2->SetEntries(36361);

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
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(1,19220.31);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(2,16023.33);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(3,9089.693);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(4,5287.362);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(5,3064.483);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(6,1794.882);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(7,1063.479);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(8,661.8333);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(9,445.8401);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(10,306.0319);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(11,218.8071);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(12,159.3604);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(13,115.9248);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(14,90.32223);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(15,66.78082);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(16,51.27344);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(17,36.16639);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(18,23.91405);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(19,13.78251);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(20,6.003176);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(21,2.26604);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinContent(22,0.6251357);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(1,34.58089);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(2,31.58585);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(3,23.79226);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(4,18.14978);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(5,13.81492);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(6,10.5664);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(7,8.123378);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(8,6.400497);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(9,5.264195);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(10,4.359772);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(11,3.68622);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(12,3.147003);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(13,2.691036);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(14,2.367212);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(15,2.034914);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(16,1.791197);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(17,1.500742);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(18,1.223497);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(19,0.9253562);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(20,0.6099614);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(21,0.3878284);
   VbbHcc_tags_Sphericity_all_stack_3->SetBinError(22,0.2005786);
   VbbHcc_tags_Sphericity_all_stack_3->SetEntries(965144);

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
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(1,2667.673);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(2,2073.793);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(3,1190.236);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(4,752.4865);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(5,413.988);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(6,225.4672);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(7,116.6086);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(8,64.16251);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(9,47.5758);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(10,34.19203);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(11,22.85112);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(12,19.35109);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(13,14.57923);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(14,13.21545);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(15,8.87603);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(16,6.025414);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(17,5.517996);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(18,2.730446);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(19,1.593071);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(20,0.6621604);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinContent(21,0.2674493);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(1,36.48581);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(2,34.11928);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(3,25.38425);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(4,21.22017);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(5,13.40264);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(6,9.714125);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(7,6.176029);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(8,3.369314);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(9,2.840569);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(10,2.408734);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(11,1.925749);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(12,1.906159);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(13,1.479051);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(14,1.566941);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(15,1.121551);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(16,0.9304195);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(17,0.9586322);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(18,0.5744053);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(19,0.6513473);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(20,0.2572525);
   VbbHcc_tags_Sphericity_all_stack_4->SetBinError(21,0.1572615);
   VbbHcc_tags_Sphericity_all_stack_4->SetEntries(50664);

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
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(1,303.9831);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(2,159.4841);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(3,119.956);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(4,53.84127);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(5,40.70255);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(6,26.38977);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(7,15.81707);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(8,10.4353);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(9,4.841006);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(10,4.591069);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(11,2.501605);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(12,2.428467);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(13,3.371271);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(14,8.925029);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(15,0.812875);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(16,1.040041);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(17,0.7696361);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(18,0.1084421);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(19,0.357421);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinContent(20,0.146767);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(1,18.43224);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(2,8.721484);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(3,10.93492);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(4,4.34563);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(5,3.953567);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(6,3.935787);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(7,2.727247);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(8,1.747956);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(9,0.7958623);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(10,1.232522);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(11,0.603535);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(12,0.5900509);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(13,1.183107);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(14,6.662763);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(15,0.2641307);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(16,0.3644994);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(17,0.3579555);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(18,0.07763185);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(19,0.2160291);
   VbbHcc_tags_Sphericity_all_stack_5->SetBinError(20,0.146767);
   VbbHcc_tags_Sphericity_all_stack_5->SetEntries(8033);

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
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(1,1.48813);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(2,0.4496752);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(3,0.9895199);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(4,1.036087);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(5,0.4496752);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinContent(8,0.3153059);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(1,0.7377081);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(2,0.3427432);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(3,0.5258926);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(4,0.5829842);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(5,0.3427432);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(7,0.1343693);
   VbbHcc_tags_Sphericity_all_stack_6->SetBinError(8,0.3153059);
   VbbHcc_tags_Sphericity_all_stack_6->SetEntries(20);

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
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(1,2.746212);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(2,1.733068);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(3,0.8882772);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(4,1.639818);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(5,0.5334232);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(7,0.3271759);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(8,0.3153059);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(1,0.8213501);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(2,0.5040209);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(3,0.5019141);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(4,0.6315938);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(5,0.3510062);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(6,0.1090586);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(7,0.1888951);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(8,0.3153059);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(9,0.1090586);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(12,0.1090586);
   VbbHcc_tags_Sphericity_all_stack_7->SetBinError(14,0.1090586);
   VbbHcc_tags_Sphericity_all_stack_7->SetEntries(57);

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
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(1,55.81363);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(2,39.70552);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(3,21.07653);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(4,14.22849);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(5,12.01344);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(6,4.319424);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(7,1.091469);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(8,0.2432072);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(9,0.2532256);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(10,0.2794144);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(11,0.8120543);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(12,0.7758471);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(13,0.2794144);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(16,0.2432072);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(1,3.822525);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(2,3.226561);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(3,2.345856);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(4,1.921799);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(5,1.773983);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(6,1.049347);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(7,0.5462054);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(8,0.2432072);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(9,0.2532256);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(10,0.2794144);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(11,0.4693271);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(12,0.4487152);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(13,0.2794144);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(16,0.2432072);
   VbbHcc_tags_Sphericity_all_stack_8->SetBinError(20,0.2794144);
   VbbHcc_tags_Sphericity_all_stack_8->SetEntries(581);

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
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(1,47.31193);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(2,40.94953);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(3,22.50302);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(4,15.62183);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(5,10.79647);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(6,5.672193);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(7,2.05965);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(8,0.9453334);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(9,0.6286011);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(10,0.4322108);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(11,0.280401);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(12,0.2235307);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(13,0.1554975);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(14,0.1298141);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(15,0.09766251);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(16,0.08977806);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(17,0.04865924);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(18,0.03372632);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(19,0.0274946);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(20,0.007131129);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinContent(21,0.002285779);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(1,0.2951139);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(2,0.2735007);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(3,0.2024171);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(4,0.1691713);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(5,0.1408171);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(6,0.1024165);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(7,0.06175238);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(8,0.04202068);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(9,0.033932);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(10,0.02828798);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(11,0.02305389);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(12,0.02070283);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(13,0.01696639);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(14,0.0156448);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(15,0.01349446);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(16,0.01281998);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(17,0.009391668);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(18,0.007712721);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(19,0.00748386);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(20,0.00361256);
   VbbHcc_tags_Sphericity_all_stack_9->SetBinError(21,0.002285779);
   VbbHcc_tags_Sphericity_all_stack_9->SetEntries(84585);

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
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(1,21.92296);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(2,18.34761);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(3,10.1443);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(4,6.659292);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(5,3.976412);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(6,2.26676);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(7,1.188133);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(8,0.6775641);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(9,0.5105685);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(10,0.3764245);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(11,0.253231);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(12,0.2107977);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(13,0.1683644);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(14,0.1327752);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(15,0.1300376);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(16,0.08076017);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(17,0.0588591);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(18,0.05338384);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(19,0.02326988);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(20,0.005475266);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(21,0.004106449);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(22,0.002737633);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinContent(23,0.001368816);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(1,0.1024621);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(2,0.09373537);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(3,0.0696987);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(4,0.05647129);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(5,0.04363745);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(6,0.03294704);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(7,0.02385317);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(8,0.01801312);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(9,0.01563654);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(10,0.01342619);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(11,0.01101215);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(12,0.01004724);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(13,0.008979225);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(14,0.007973925);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(15,0.007891292);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(16,0.006218882);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(17,0.005309095);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(18,0.005056134);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(19,0.003338188);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(20,0.001619259);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(21,0.001402319);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(22,0.001144989);
   VbbHcc_tags_Sphericity_all_stack_10->SetBinError(23,0.0008096295);
   VbbHcc_tags_Sphericity_all_stack_10->SetEntries(147270);

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
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(1,0.1432872);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(2,0.134535);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(3,0.04082261);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(4,0.04788616);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(5,0.02313608);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(6,0.01449228);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(7,0.003856013);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(1,0.01765782);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(2,0.01744375);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(3,0.009136831);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(4,0.009969939);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(5,0.006786583);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(6,0.005257615);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(7,0.002770611);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(9,0.001580251);
   VbbHcc_tags_Sphericity_all_stack_11->SetBinError(10,0.001580251);
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
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(1,0.0684962);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(2,0.04786268);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(3,0.02472735);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(4,0.02257181);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(5,0.01085877);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(6,0.005221948);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(7,0.003250844);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(8,0.001579396);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(9,0.002927684);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(10,0.0004152113);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(11,0.001913495);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(12,0.001337349);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(13,0.0004152113);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(14,0.0002996568);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinContent(15,0.0002996568);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(1,0.004440041);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(2,0.003710082);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(3,0.002632865);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(4,0.0025189);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(5,0.00177511);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(6,0.001221788);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(7,0.0009590356);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(8,0.0006607024);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(9,0.0009382127);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(10,0.0002935987);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(11,0.000731554);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(12,0.0006201436);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(13,0.0002935987);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(14,0.0002996568);
   VbbHcc_tags_Sphericity_all_stack_12->SetBinError(15,0.0002996568);
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
   VbbHcc_tags_Sphericity_all__164->SetBinContent(1,168677);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(2,128054);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(3,73544);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(4,43272);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(5,25512);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(6,14570);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(7,8051);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(8,4956);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(9,3461);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(10,2486);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(11,1755);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(12,1289);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(13,1035);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(14,773);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(15,605);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(16,472);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(17,359);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(18,256);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(19,116);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(20,44);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(21,16);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(22,7);
   VbbHcc_tags_Sphericity_all__164->SetBinContent(23,1);
   VbbHcc_tags_Sphericity_all__164->SetEntries(479335);

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
   227766.3,
   182168.1,
   100779.9,
   62489.79,
   47414.38,
   19536.23,
   8567.154,
   5724.752,
   3228.64,
   2080.166,
   2028.173,
   963.3383,
   902.8912,
   439.1286,
   581.8447,
   472.5362,
   254.45,
   137.1618,
   112.8272,
   7.152725,
   2.587005,
   0.6278733,
   0.001368816,
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
   16251.9,
   6542.501,
   4604.975,
   3368.477,
   15048.58,
   2183.061,
   1087.135,
   790.5286,
   613.575,
   408.8025,
   545.553,
   112.2221,
   116.2352,
   72.75016,
   84.97521,
   82.06246,
   66.86625,
   33.05324,
   37.28215,
   0.7349982,
   0.421153,
   0.2005819,
   0.0008096295,
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
   Graph_Graph_from_VbbHcc_tags_Sphericity_all1119->SetMaximum(268420);
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
   data_mc_ratio__165->SetBinContent(1,0.7405705);
   data_mc_ratio__165->SetBinContent(2,0.702944);
   data_mc_ratio__165->SetBinContent(3,0.7297484);
   data_mc_ratio__165->SetBinContent(4,0.6924652);
   data_mc_ratio__165->SetBinContent(5,0.5380646);
   data_mc_ratio__165->SetBinContent(6,0.7457938);
   data_mc_ratio__165->SetBinContent(7,0.939752);
   data_mc_ratio__165->SetBinContent(8,0.8657144);
   data_mc_ratio__165->SetBinContent(9,1.071968);
   data_mc_ratio__165->SetBinContent(10,1.195097);
   data_mc_ratio__165->SetBinContent(11,0.8653108);
   data_mc_ratio__165->SetBinContent(12,1.338055);
   data_mc_ratio__165->SetBinContent(13,1.146318);
   data_mc_ratio__165->SetBinContent(14,1.760304);
   data_mc_ratio__165->SetBinContent(15,1.039796);
   data_mc_ratio__165->SetBinContent(16,0.9988652);
   data_mc_ratio__165->SetBinContent(17,1.410886);
   data_mc_ratio__165->SetBinContent(18,1.866408);
   data_mc_ratio__165->SetBinContent(19,1.028121);
   data_mc_ratio__165->SetBinContent(20,6.151502);
   data_mc_ratio__165->SetBinContent(21,6.184758);
   data_mc_ratio__165->SetBinContent(22,11.14875);
   data_mc_ratio__165->SetBinContent(23,730.5582);
   data_mc_ratio__165->SetBinError(1,0.001803178);
   data_mc_ratio__165->SetBinError(2,0.001964374);
   data_mc_ratio__165->SetBinError(3,0.002690912);
   data_mc_ratio__165->SetBinError(4,0.003328852);
   data_mc_ratio__165->SetBinError(5,0.003368699);
   data_mc_ratio__165->SetBinError(6,0.006178585);
   data_mc_ratio__165->SetBinError(7,0.01047342);
   data_mc_ratio__165->SetBinError(8,0.01229728);
   data_mc_ratio__165->SetBinError(9,0.01822138);
   data_mc_ratio__165->SetBinError(10,0.02396914);
   data_mc_ratio__165->SetBinError(11,0.0206554);
   data_mc_ratio__165->SetBinError(12,0.03726899);
   data_mc_ratio__165->SetBinError(13,0.03563155);
   data_mc_ratio__165->SetBinError(14,0.06331374);
   data_mc_ratio__165->SetBinError(15,0.04227374);
   data_mc_ratio__165->SetBinError(16,0.0459765);
   data_mc_ratio__165->SetBinError(17,0.07446373);
   data_mc_ratio__165->SetBinError(18,0.1166505);
   data_mc_ratio__165->SetBinError(19,0.09545866);
   data_mc_ratio__165->SetBinError(20,0.9273738);
   data_mc_ratio__165->SetBinError(21,1.54619);
   data_mc_ratio__165->SetBinError(22,4.21383);
   data_mc_ratio__165->SetBinError(23,730.5582);
   data_mc_ratio__165->SetMinimum(0.4);
   data_mc_ratio__165->SetMaximum(1.6);
   data_mc_ratio__165->SetEntries(0.8309024);
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
   0.07135339,
   0.03591463,
   0.04569337,
   0.05390445,
   0.3173844,
   0.1117442,
   0.1268957,
   0.1380896,
   0.1900413,
   0.196524,
   0.2689874,
   0.1164929,
   0.1287366,
   0.1656694,
   0.1460445,
   0.1736638,
   0.2627874,
   0.2409799,
   0.330436,
   0.1027578,
   0.1627956,
   0.3194623,
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
