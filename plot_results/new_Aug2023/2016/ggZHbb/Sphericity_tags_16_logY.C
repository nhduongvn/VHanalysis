void Sphericity_tags_16_logY()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:16:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-4.340232,1.133333,1.508655);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLogy();
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,4.4281);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,3.638471);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,2.020844);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,1.323672);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,0.7955382);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.4600172);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.2449415);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.1369063);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1044617);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.08141678);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.05399315);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.04395398);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.03510859);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.02765577);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.02717026);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.01677419);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01283663);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.01037137);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.004782562);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001425479);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001053014);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0003765377);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.000351307);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.0387248);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.03469809);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.02591253);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02099964);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.01635184);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01250138);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.009160144);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.006881188);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.005992092);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.005334688);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.004362461);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.003909747);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.003504744);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.003089353);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.00308766);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.00243242);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002130805);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.001905342);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.001296279);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0007189875);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0006090442);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0003765377);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.000351307);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(40948);

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
