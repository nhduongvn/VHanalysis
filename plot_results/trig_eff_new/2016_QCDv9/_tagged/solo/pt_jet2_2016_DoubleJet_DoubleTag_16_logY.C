#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16/pt_jet2_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16", "pt_jet2_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->Range(-100,-0.6138873,566.6667,2.514685);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet2__275 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet2__275","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(5,2);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(6,20);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(7,43);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(8,56);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(9,69);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(10,84);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(11,61);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(12,44);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(13,19);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(14,19);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(15,12);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(16,16);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(17,9);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(18,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(19,4);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(20,4);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(21,3);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(22,4);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(23,2);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(24,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(29,3);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(30,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(33,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetBinContent(35,1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetEntries(479);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 479    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  103.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.89");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet2__275);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet2__275->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16);
}
