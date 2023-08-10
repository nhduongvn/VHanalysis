void Z_jetmass_noJEC_both_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Thu Aug 10 10:43:48 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-1.50851,340,-0.1005422);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLogy();
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_6 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_6","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinContent(3,0.1445668);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinContent(4,0.2678449);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinContent(5,0.2991887);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinContent(6,0.1535887);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinContent(7,0.3027695);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinContent(8,0.1552273);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinContent(15,0.08576627);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinContent(16,0.139529);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinError(3,0.1445668);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinError(4,0.1893967);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinError(5,0.2123188);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinError(6,0.1535887);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinError(7,0.2143435);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinError(8,0.1552273);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinError(15,0.08576627);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetBinError(16,0.139529);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_jetmass_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_16->Modified();
   Z_jetmass_noJEC_both_16->cd();
   Z_jetmass_noJEC_both_16->SetSelected(Z_jetmass_noJEC_both_16);
}
