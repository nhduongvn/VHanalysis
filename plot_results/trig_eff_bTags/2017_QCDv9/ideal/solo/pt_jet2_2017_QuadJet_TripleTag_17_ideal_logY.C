#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_ideal/pt_jet2_2017_QuadJet_TripleTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_ideal", "pt_jet2_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->Range(-100,-0.6304655,566.6667,2.663889);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__122 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__122","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(6,23);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(7,84);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(8,96);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(9,114);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(10,86);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(11,63);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(12,53);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(13,41);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(14,32);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(15,17);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(16,14);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(17,10);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(18,10);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(19,6);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(20,9);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(21,7);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(22,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(23,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(26,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(27,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(28,2);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(30,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetEntries(680);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 680    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  103.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  41.26");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__122);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2__122->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__122->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__122->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_ideal);
}
