#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16_tagged/pt_jet2_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16_tagged", "pt_jet2_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->Range(-100,-0.4607236,566.6667,1.136213);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetLogy();
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet2__143 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet2__143","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(5,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(6,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(7,2);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(8,2);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(9,2);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(10,3);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(11,4);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(12,3);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(13,3);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(14,5);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(15,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetBinContent(29,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetEntries(28);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  109.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  43.45");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet2__143);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__143->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16_tagged);
}
