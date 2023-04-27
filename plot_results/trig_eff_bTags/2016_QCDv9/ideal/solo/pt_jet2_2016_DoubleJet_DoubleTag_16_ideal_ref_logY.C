#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref/pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref", "pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->Range(-100,-0.6233524,566.6667,2.599871);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLogy();
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet2_ref__252 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet2_ref__252","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(5,6);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(6,20);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(7,57);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(8,85);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(9,100);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(10,93);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(11,88);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(12,62);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(13,60);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(14,34);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(15,17);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(16,22);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(17,17);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(18,16);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(19,7);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(20,10);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(21,8);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(22,6);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(23,3);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(24,5);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(25,2);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(26,3);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(27,1);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(28,1);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(29,2);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(30,1);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(33,1);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetBinContent(35,1);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetEntries(728);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 728    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  109.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  42.76");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet2_ref__252);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet2_ref__252->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16_ideal_ref);
}
