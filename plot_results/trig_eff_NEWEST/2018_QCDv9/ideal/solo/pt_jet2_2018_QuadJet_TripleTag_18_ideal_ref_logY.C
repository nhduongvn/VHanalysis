#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref/pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Wed May  3 17:41:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref", "pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->Range(-100,-0.6835327,566.6667,3.141494);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet2_ref__9 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet2_ref__9","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(5,3);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(6,112);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(7,236);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(8,303);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(9,301);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(10,233);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(11,175);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(12,129);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(13,123);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(14,60);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(15,55);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(16,54);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(17,27);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(18,27);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(19,33);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(20,13);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(21,11);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(22,10);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(23,9);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(24,5);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(25,4);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(26,3);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(27,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(28,9);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(31,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(32,2);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(35,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetEntries(1943);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1943   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  101.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  40.26");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet2_ref__9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet2_ref__9->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_ideal_ref);
}
