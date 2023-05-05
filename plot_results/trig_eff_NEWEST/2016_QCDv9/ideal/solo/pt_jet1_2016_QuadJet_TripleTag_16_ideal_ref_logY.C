#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref/pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref", "pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->Range(-100,-0.6295046,566.6667,2.655242);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1_ref__9 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1_ref__9","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(5,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(6,25);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(7,62);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(8,82);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(9,112);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(10,103);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(11,99);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(12,94);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(13,82);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(14,50);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(15,47);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(16,48);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(17,27);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(18,29);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(19,25);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(20,35);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(21,27);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(22,26);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(23,21);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(24,9);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(25,13);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(26,12);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(27,6);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(28,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(29,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(30,7);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(31,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(32,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(34,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(36,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(37,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(40,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(43,5);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetBinContent(51,5);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetEntries(1092);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1092   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  135.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  66.14");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1_ref__9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__9->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref);
}
