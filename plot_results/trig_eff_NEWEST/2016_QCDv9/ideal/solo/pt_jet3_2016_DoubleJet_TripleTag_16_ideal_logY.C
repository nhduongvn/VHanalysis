#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_ideal/pt_jet3_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_ideal", "pt_jet3_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->Range(-100,-0.6457245,566.6667,2.80122);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_pt_jet3__23 = new TH1D("_DoubleJet_TripleTag_ideal_pt_jet3__23","",50,0,500);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(5,44);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(6,98);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(7,151);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(8,100);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(9,83);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(10,57);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(11,45);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(12,33);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(13,17);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(14,11);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(15,8);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(16,6);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(17,4);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(18,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(19,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(20,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(24,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(26,1);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetBinContent(27,2);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetEntries(666);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 666    ");
   ptstats_LaTex = ptstats->AddText("Mean  =   81.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  29.19");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_pt_jet3__23);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_pt_jet3__23->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_pt_jet3__23->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_ideal->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_ideal);
}
