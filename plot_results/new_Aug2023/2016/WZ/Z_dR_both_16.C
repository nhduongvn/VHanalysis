void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Tue Aug 22 09:22:40 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-0.0743268,6.8,0.6689412);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_7 = new TH1D("VbbHcc_both_Z_dR_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(3,0.5662994);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(4,0.457376);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(5,0.2578937);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(6,0.1823739);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(7,0.09813325);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(8,0.0778465);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(9,0.1797396);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(10,0.1786943);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(11,0.1593737);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(13,0.2604592);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(14,0.3275189);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(15,0.3988554);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(16,0.1887101);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(17,0.2827811);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(18,0.09132081);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(19,0.08558222);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(21,0.09227263);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(22,0.0686903);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(24,0.2458232);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(25,0.0797212);
   VbbHcc_both_Z_dR_stack_7->SetBinContent(29,0.08656424);
   VbbHcc_both_Z_dR_stack_7->SetBinError(3,0.2322378);
   VbbHcc_both_Z_dR_stack_7->SetBinError(4,0.2050838);
   VbbHcc_both_Z_dR_stack_7->SetBinError(5,0.1492826);
   VbbHcc_both_Z_dR_stack_7->SetBinError(6,0.1290231);
   VbbHcc_both_Z_dR_stack_7->SetBinError(7,0.09813325);
   VbbHcc_both_Z_dR_stack_7->SetBinError(8,0.0778465);
   VbbHcc_both_Z_dR_stack_7->SetBinError(9,0.1278823);
   VbbHcc_both_Z_dR_stack_7->SetBinError(10,0.1263656);
   VbbHcc_both_Z_dR_stack_7->SetBinError(11,0.1127139);
   VbbHcc_both_Z_dR_stack_7->SetBinError(13,0.1507859);
   VbbHcc_both_Z_dR_stack_7->SetBinError(14,0.1709814);
   VbbHcc_both_Z_dR_stack_7->SetBinError(15,0.199824);
   VbbHcc_both_Z_dR_stack_7->SetBinError(16,0.1335244);
   VbbHcc_both_Z_dR_stack_7->SetBinError(17,0.1633181);
   VbbHcc_both_Z_dR_stack_7->SetBinError(18,0.09132081);
   VbbHcc_both_Z_dR_stack_7->SetBinError(19,0.08558222);
   VbbHcc_both_Z_dR_stack_7->SetBinError(21,0.09227263);
   VbbHcc_both_Z_dR_stack_7->SetBinError(22,0.0686903);
   VbbHcc_both_Z_dR_stack_7->SetBinError(24,0.1421161);
   VbbHcc_both_Z_dR_stack_7->SetBinError(25,0.0797212);
   VbbHcc_both_Z_dR_stack_7->SetBinError(29,0.08656424);
   VbbHcc_both_Z_dR_stack_7->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
