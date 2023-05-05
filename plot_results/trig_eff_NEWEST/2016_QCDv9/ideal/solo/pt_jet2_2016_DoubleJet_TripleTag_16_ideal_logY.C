#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_TripleTag_16_ideal/pt_jet2_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet2_2016_DoubleJet_TripleTag_16_ideal", "pt_jet2_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.6170261,566.6667,2.542935);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet2__17 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet2__17","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(5,4);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(6,15);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(7,48);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(8,75);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(9,87);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(10,89);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(11,87);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(12,58);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(13,54);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(14,27);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(15,20);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(16,25);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(17,14);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(18,16);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(19,7);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(20,10);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(21,7);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(22,5);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(23,3);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(24,4);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(25,2);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(26,3);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(27,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(28,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(29,2);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(33,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetBinContent(35,1);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetEntries(666);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 666    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  111.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   42.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet2__17);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet2__17->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet2__17->Draw("HIST");
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet2_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet2_2016_DoubleJet_TripleTag_16_ideal);
}
