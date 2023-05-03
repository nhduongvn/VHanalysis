#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_ideal/pt_jet2_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_ideal", "pt_jet2_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2__13 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2__13","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(6,0.2380952);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(7,0.55);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(8,0.5306122);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(9,0.5925926);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(10,0.6538462);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(11,0.6818182);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(12,0.6842105);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(13,0.6875);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(14,0.75);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(15,0.1111111);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(16,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(17,0.5);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(18,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(21,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(22,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetBinContent(32,1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetEntries(12.97979);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  166.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  70.73");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2__13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_pt_jet2__13->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2__13->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2__13->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_ideal);
}
