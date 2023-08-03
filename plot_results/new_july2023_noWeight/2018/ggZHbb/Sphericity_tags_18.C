void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Aug  3 12:23:34 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-1.253156,1.133333,11.2784);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,9.547853);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,7.990723);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,4.418028);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,2.900244);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.7318);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.9872155);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.5174535);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.2950916);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.222362);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.1639398);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.1102868);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.09180627);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.07332579);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.05782603);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.05663374);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.03517253);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.02563422);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.02324964);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.01013446);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.002384579);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001788434);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.001192289);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0005961446);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.07544469);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.06901903);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.0513204);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.04158082);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.03213103);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.0242595);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01756352);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.01326338);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.01151347);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.00988594);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.008108444);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.00739796);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.006611564);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.005871344);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.005810499);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.004579074);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.003909182);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.003722922);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.002457967);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.001192289);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.001032553);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0008430758);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0005961446);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(49090);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
