#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref/pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref = new TCanvas("pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref", "pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->Range(-100,-0.2712055,566.6667,2.440849);
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV2_ideal_pt_jet0_ref__9 = new TH1D("_QuadJet_noTagV2_ideal_pt_jet0_ref__9","",50,0,500);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(11,19);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(12,65);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(13,59);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(14,73);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(15,78);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(16,59);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(17,69);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(18,69);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(19,62);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(20,57);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(21,56);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(22,56);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(23,44);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(24,47);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(25,37);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(26,28);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(27,44);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(28,32);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(29,24);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(30,17);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(31,24);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(32,26);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(33,14);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(34,19);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(35,13);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(36,13);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(37,7);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(38,5);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(39,14);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(40,12);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(41,11);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(42,11);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(43,6);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(44,11);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(45,7);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(46,4);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(47,3);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(48,4);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(49,3);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(50,2);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetBinContent(51,42);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetEntries(1246);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV2_ideal_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1246   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  218.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.66");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV2_ideal_pt_jet0_ref__9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->SetLineColor(ci);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetXaxis()->SetRange(1,50);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_pt_jet0_ref__9->Draw("HIST");
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->Modified();
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->cd();
   pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref->SetSelected(pt_jet0_2018_QuadJet_noTagV2_18_ideal_ref);
}
