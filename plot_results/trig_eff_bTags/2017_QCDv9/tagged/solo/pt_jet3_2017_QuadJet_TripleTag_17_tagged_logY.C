#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_tagged/pt_jet3_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_tagged", "pt_jet3_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->Range(-100,-0.6431477,566.6667,2.778029);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__74 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__74","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(5,40);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(6,129);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(7,144);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(8,111);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(9,82);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(10,61);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(11,42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(12,27);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(13,10);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(14,12);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(15,15);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(16,8);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(17,4);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(18,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(19,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(20,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(21,2);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetBinContent(25,1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetEntries(691);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 691    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  79.57");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  27.51");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__74);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet3__74->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__74->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__74->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_tagged);
}
