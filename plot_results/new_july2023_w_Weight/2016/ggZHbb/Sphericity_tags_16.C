void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Thu Aug 10 12:23:34 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-0.8002132,1.133333,7.201918);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,6.096862);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,5.114237);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,2.829606);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,1.850789);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.109019);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.6305941);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.3288859);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.1871346);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1390203);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1042436);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.07044158);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.05669365);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.04565653);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.03570469);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.03514264);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02147046);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01624033);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.01456802);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.006404467);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.00154);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001168028);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0008354348);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.000389678);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.04858703);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.04452513);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03314191);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02677369);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.02073597);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01562552);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01125555);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.00848743);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.007270875);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.006332875);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.005221002);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.004650134);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.004171331);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.003677689);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.003658785);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.00285128);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002497317);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002348098);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.001572957);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0007734799);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0006755663);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0005907416);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.000389678);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(48968);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
