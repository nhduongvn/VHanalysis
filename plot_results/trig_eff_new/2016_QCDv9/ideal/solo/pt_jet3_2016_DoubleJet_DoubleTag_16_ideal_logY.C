#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16_ideal/pt_jet3_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:09 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet3_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->Range(-100,-0.6233524,566.6667,2.599871);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetLogy();
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet3__263 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet3__263","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(5,29);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(6,84);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(7,100);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(8,73);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(9,59);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(10,40);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(11,21);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(12,12);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(13,5);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(14,10);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(15,8);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(16,3);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(18,3);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(19,3);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(28,2);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetBinContent(30,1);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetEntries(453);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 453    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  78.99");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   30.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet3__263);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet3__263->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16_ideal);
}
