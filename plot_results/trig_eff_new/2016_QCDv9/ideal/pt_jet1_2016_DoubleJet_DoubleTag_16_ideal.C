#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16_ideal/pt_jet1_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet1_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->Range(-109.1764,-0.008502024,585.8166,0.06234818);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet1__238 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet1__238","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(10,0.01409443);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(11,0.02761795);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(12,0.02564103);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(13,0.02863436);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(14,0.02587322);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(15,0.02562112);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(16,0.01443696);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(17,0.03023256);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(18,0.02199413);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(19,0.02058319);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(20,0.02204409);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(21,0.02974828);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(22,0.03975535);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(23,0.02721088);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(24,0.02845528);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(25,0.04081633);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(26,0.00621118);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(27,0.0141844);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(28,0.01960784);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(29,0.02803738);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(30,0.03157895);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(31,0.02597403);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(32,0.03174603);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(33,0.03703704);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(34,0.0212766);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(35,0.02380952);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(36,0.03030303);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(40,0.04166667);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(42,0.05263158);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(45,0.03846154);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetBinContent(51,0.01162791);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetEntries(0.825285);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  259.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   99.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet1__238);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet1__238->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16_ideal);
}
