#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17/pt_jet0_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17", "pt_jet0_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17->Range(-100,-0.680208,566.6667,3.111572);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet0__230 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet0__230","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(7,1);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(8,25);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(9,78);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(10,133);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(11,187);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(12,238);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(13,266);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(14,284);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(15,285);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(16,266);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(17,244);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(18,237);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(19,192);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(20,175);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(21,138);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(22,143);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(23,136);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(24,130);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(25,103);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(26,96);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(27,84);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(28,72);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(29,84);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(30,62);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(31,38);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(32,54);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(33,50);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(34,38);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(35,35);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(36,42);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(37,26);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(38,25);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(39,33);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(40,17);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(41,21);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(42,19);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(43,12);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(44,15);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(45,5);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(46,14);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(47,11);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(48,20);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(49,2);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(50,8);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetBinContent(51,125);
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetEntries(4269);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4269   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  194.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.13");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet0__230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet0__230->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__230->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__230->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17->cd();
   pt_jet0_2017_QuadJet_TripleTag_17->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17);
}
