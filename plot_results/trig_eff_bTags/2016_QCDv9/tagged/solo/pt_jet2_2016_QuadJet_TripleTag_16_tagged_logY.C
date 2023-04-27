#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16_tagged/pt_jet2_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16_tagged = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16_tagged", "pt_jet2_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->Range(-100,-0.6345905,566.6667,2.701015);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__134 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__134","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(5,5);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(6,41);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(7,105);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(8,123);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(9,97);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(10,85);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(11,78);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(12,54);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(13,48);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(14,28);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(15,16);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(16,20);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(17,14);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(18,14);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(19,5);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(20,9);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(21,7);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(22,5);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(23,3);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(24,4);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(25,2);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(26,3);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(27,1);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(28,1);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(29,2);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetBinContent(35,1);
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetEntries(772);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 772    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  102.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  42.13");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__134);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet2__134->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__134->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__134->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->cd();
   pt_jet2_2016_QuadJet_TripleTag_16_tagged->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16_tagged);
}
