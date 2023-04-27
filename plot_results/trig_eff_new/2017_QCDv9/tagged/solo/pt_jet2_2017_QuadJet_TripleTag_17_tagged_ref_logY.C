#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref/pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref = new TCanvas("pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref", "pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref",0,0,600,600);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetHighLightColor(2);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->Range(-100,-0.838134,566.6667,4.532905);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetFillColor(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetBorderSize(2);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetLogy();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetLeftMargin(0.15);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetFrameBorderMode(0);
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2_ref__69 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2_ref__69","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(5,819);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(6,4506);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(7,5227);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(8,4439);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(9,3482);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(10,2547);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(11,1947);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(12,1366);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(13,1072);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(14,749);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(15,546);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(16,464);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(17,297);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(18,215);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(19,186);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(20,138);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(21,97);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(22,72);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(23,62);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(24,35);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(25,33);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(26,23);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(27,15);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(28,20);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(29,16);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(30,6);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(31,9);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(32,6);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(33,6);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(34,3);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(35,4);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(36,7);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(37,3);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(38,4);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(39,2);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(42,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(44,2);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(47,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(49,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetBinContent(51,1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetEntries(28430);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28430  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  87.75");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  35.86");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2_ref__69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2_ref__69->Draw("HIST");
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->Modified();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->cd();
   pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref->SetSelected(pt_jet2_2017_QuadJet_TripleTag_17_tagged_ref);
}
