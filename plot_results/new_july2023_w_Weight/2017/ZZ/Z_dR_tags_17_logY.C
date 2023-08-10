void Z_dR_tags_17_logY()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Thu Aug 10 10:40:54 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.2,-1.192772,6.8,1.34639);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLogy();
   Z_dR_tags_17->SetLeftMargin(0.15);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_stack_8 = new TH1D("VbbHcc_tags_Z_dR_stack_8","",30,0,6);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(3,2.581818);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(4,4.202135);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(5,6.530178);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(6,2.372205);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(7,1.160296);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(8,0.8749008);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(9,1.514797);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(10,1.053787);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(11,0.8641368);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(12,0.4294781);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(13,1.75969);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(14,2.652531);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(15,4.159757);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(16,3.311937);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(17,3.8074);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(18,2.096257);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(19,2.377801);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(20,2.494001);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(21,1.192047);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(22,0.5985458);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(23,0.6531596);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(24,1.222705);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(25,0.3872143);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(27,0.2302364);
   VbbHcc_tags_Z_dR_stack_8->SetBinContent(28,0.8535516);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(3,0.8508852);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(4,1.067994);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(5,1.399134);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(6,0.8546403);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(7,0.5858982);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(8,0.5055587);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(9,0.6779833);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(10,0.5496721);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(11,0.503557);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(12,0.3037336);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(13,0.7278841);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(14,0.8602261);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(15,1.122834);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(16,1.013702);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(17,1.056484);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(18,0.7942984);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(19,0.8043191);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(20,0.8365766);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(21,0.596511);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(22,0.4241608);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(23,0.3788926);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(24,0.6147536);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(25,0.3872143);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(27,0.2302364);
   VbbHcc_tags_Z_dR_stack_8->SetBinError(28,0.5064996);
   VbbHcc_tags_Z_dR_stack_8->SetEntries(178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_dR_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
