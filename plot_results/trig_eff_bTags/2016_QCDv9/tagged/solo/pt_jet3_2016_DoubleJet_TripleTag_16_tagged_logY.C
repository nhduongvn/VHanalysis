#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_tagged/pt_jet3_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_tagged", "pt_jet3_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->Range(-100,-0.6435234,566.6667,2.78141);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_pt_jet3__152 = new TH1D("_DoubleJet_TripleTag_tagged_pt_jet3__152","",50,0,500);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(5,39);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(6,102);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(7,145);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(8,96);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(9,75);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(10,52);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(11,43);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(12,31);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(13,15);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(14,9);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(15,8);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(16,6);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(17,4);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(18,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(19,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(20,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(24,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(26,1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetBinContent(27,2);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetEntries(634);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 634    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  80.81");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  29.37");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_pt_jet3__152);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_pt_jet3__152->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_pt_jet3__152->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_tagged->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_tagged);
}
