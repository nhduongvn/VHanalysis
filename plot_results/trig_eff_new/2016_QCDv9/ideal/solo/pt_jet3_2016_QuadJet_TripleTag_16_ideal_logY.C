#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_ideal/pt_jet3_2016_QuadJet_TripleTag_16_ideal
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_ideal", "pt_jet3_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->Range(-100,-0.8068034,566.6667,4.25093);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__254 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__254","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(5,1175);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(6,2935);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(7,2413);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(8,1746);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(9,1036);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(10,700);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(11,498);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(12,342);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(13,199);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(14,154);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(15,77);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(16,52);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(17,39);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(18,30);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(19,24);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(20,15);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(21,11);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(22,6);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(23,8);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(24,2);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(25,2);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(26,4);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(27,4);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(28,2);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(30,4);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetEntries(11481);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11481  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  73.53");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  26.18");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3__254->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__254->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__254->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_ideal);
}
