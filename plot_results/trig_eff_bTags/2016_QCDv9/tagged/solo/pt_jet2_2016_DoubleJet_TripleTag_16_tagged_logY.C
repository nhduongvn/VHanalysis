#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_tagged/pt_jet2_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_tagged", "pt_jet2_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->Range(-100,-0.6145297,566.6667,2.520468);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet2__140 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet2__140","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(5,4);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(6,17);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(7,50);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(8,76);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(9,85);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(10,80);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(11,79);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(12,55);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(13,50);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(14,28);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(15,16);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(16,20);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(17,14);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(18,15);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(19,6);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(20,9);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(21,7);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(22,5);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(23,3);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(24,4);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(25,2);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(26,3);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(27,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(28,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(29,2);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(33,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetBinContent(35,1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetEntries(634);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 634    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  110.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  42.91");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet2__140);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet2__140->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet2__140->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_tagged->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_tagged);
}
