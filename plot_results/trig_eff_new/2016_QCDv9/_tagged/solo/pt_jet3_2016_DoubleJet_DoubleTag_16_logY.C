#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16/pt_jet3_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16", "pt_jet3_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->Range(-100,-0.6285265,566.6667,2.646438);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet3__299 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet3__299","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(5,34);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(6,89);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(7,110);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(8,78);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(9,60);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(10,40);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(11,21);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(12,12);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(13,5);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(14,10);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(15,8);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(16,3);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(18,3);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(19,3);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(28,2);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetBinContent(30,1);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetEntries(479);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 479    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  78.06");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  29.72");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet3__299);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet3__299->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16);
}
