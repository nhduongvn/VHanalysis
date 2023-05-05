#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref/pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref", "pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->Range(-100,-0.6764626,566.6667,3.077863);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3_ref__21 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3_ref__21","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(5,126);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(6,266);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(7,245);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(8,135);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(9,98);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(10,67);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(11,55);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(12,36);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(13,21);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(14,11);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(15,10);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(16,7);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(17,4);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(18,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(20,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(21,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(22,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetBinContent(27,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetEntries(1092);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1092   ");
   ptstats_LaTex = ptstats->AddText("Mean  =     74");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  27.36");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3_ref__21);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__21->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref);
}
