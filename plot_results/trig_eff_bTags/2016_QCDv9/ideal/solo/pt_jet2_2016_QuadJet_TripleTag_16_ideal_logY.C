#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_ideal/pt_jet2_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_ideal", "pt_jet2_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->Range(-100,-0.6345905,566.6667,2.701015);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__242 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__242","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(5,5);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(6,41);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(7,105);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(8,123);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(9,97);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(10,84);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(11,78);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(12,52);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(13,47);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(14,28);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(15,16);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(16,20);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(17,14);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(18,14);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(19,5);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(20,8);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(21,7);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(22,5);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(23,3);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(24,4);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(25,2);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(26,3);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(29,2);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetEntries(767);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 767    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  102.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  42.13");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__242);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2__242->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__242->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__242->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_ideal);
}
