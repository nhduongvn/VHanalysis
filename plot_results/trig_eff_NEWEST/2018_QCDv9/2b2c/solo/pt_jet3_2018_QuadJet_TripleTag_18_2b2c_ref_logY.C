#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref/pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref", "pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->Range(-100,-0.8801455,566.6667,4.911009);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_2b2c_pt_jet3_ref__66 = new TH1D("_QuadJet_TripleTag_2b2c_pt_jet3_ref__66","",50,0,500);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(5,4494);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(6,11333);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(7,9759);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(8,6753);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(9,4219);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(10,2609);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(11,1729);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(12,1079);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(13,725);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(14,482);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(15,295);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(16,235);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(17,136);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(18,98);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(19,63);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(20,51);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(21,47);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(22,15);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(23,20);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(24,11);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(25,6);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(26,11);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(27,7);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(28,7);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(29,3);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(30,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(32,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(33,2);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(34,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(35,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetBinContent(37,1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetEntries(44194);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_2b2c_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 44194  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  72.58");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   24.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_2b2c_pt_jet3_ref__66);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->SetLineColor(ci);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_2b2c_pt_jet3_ref__66->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_2b2c_ref);
}
