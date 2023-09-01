#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.706354,1.133333,6.357185);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity__942 = new TH1D("VbbHcc_both_Sphericity__942","",25,0,1);
   VbbHcc_both_Sphericity__942->SetBinContent(1,4.810818);
   VbbHcc_both_Sphericity__942->SetBinContent(2,5.381744);
   VbbHcc_both_Sphericity__942->SetBinContent(3,3.920926);
   VbbHcc_both_Sphericity__942->SetBinContent(4,3.267204);
   VbbHcc_both_Sphericity__942->SetBinContent(5,2.724872);
   VbbHcc_both_Sphericity__942->SetBinContent(6,2.227363);
   VbbHcc_both_Sphericity__942->SetBinContent(7,1.902411);
   VbbHcc_both_Sphericity__942->SetBinContent(8,1.479718);
   VbbHcc_both_Sphericity__942->SetBinContent(9,1.439616);
   VbbHcc_both_Sphericity__942->SetBinContent(10,1.151842);
   VbbHcc_both_Sphericity__942->SetBinContent(11,0.9460945);
   VbbHcc_both_Sphericity__942->SetBinContent(12,0.8520759);
   VbbHcc_both_Sphericity__942->SetBinContent(13,0.6498044);
   VbbHcc_both_Sphericity__942->SetBinContent(14,0.5683789);
   VbbHcc_both_Sphericity__942->SetBinContent(15,0.4893634);
   VbbHcc_both_Sphericity__942->SetBinContent(16,0.3570929);
   VbbHcc_both_Sphericity__942->SetBinContent(17,0.2762962);
   VbbHcc_both_Sphericity__942->SetBinContent(18,0.2059769);
   VbbHcc_both_Sphericity__942->SetBinContent(19,0.1050068);
   VbbHcc_both_Sphericity__942->SetBinContent(20,0.0491806);
   VbbHcc_both_Sphericity__942->SetBinContent(21,0.02404162);
   VbbHcc_both_Sphericity__942->SetBinContent(22,0.005647185);
   VbbHcc_both_Sphericity__942->SetBinContent(23,0.001254204);
   VbbHcc_both_Sphericity__942->SetBinError(1,0.07817725);
   VbbHcc_both_Sphericity__942->SetBinError(2,0.08219419);
   VbbHcc_both_Sphericity__942->SetBinError(3,0.07040725);
   VbbHcc_both_Sphericity__942->SetBinError(4,0.06446466);
   VbbHcc_both_Sphericity__942->SetBinError(5,0.05852696);
   VbbHcc_both_Sphericity__942->SetBinError(6,0.05361494);
   VbbHcc_both_Sphericity__942->SetBinError(7,0.04934769);
   VbbHcc_both_Sphericity__942->SetBinError(8,0.04321538);
   VbbHcc_both_Sphericity__942->SetBinError(9,0.04267968);
   VbbHcc_both_Sphericity__942->SetBinError(10,0.03847387);
   VbbHcc_both_Sphericity__942->SetBinError(11,0.03484312);
   VbbHcc_both_Sphericity__942->SetBinError(12,0.03271813);
   VbbHcc_both_Sphericity__942->SetBinError(13,0.02882888);
   VbbHcc_both_Sphericity__942->SetBinError(14,0.02693819);
   VbbHcc_both_Sphericity__942->SetBinError(15,0.02513747);
   VbbHcc_both_Sphericity__942->SetBinError(16,0.02114935);
   VbbHcc_both_Sphericity__942->SetBinError(17,0.01854491);
   VbbHcc_both_Sphericity__942->SetBinError(18,0.01629778);
   VbbHcc_both_Sphericity__942->SetBinError(19,0.01179288);
   VbbHcc_both_Sphericity__942->SetBinError(20,0.00781419);
   VbbHcc_both_Sphericity__942->SetBinError(21,0.005531827);
   VbbHcc_both_Sphericity__942->SetBinError(22,0.002588094);
   VbbHcc_both_Sphericity__942->SetBinError(23,0.001254204);
   VbbHcc_both_Sphericity__942->SetEntries(28807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_Sphericity__942->SetFillColor(ci);
   VbbHcc_both_Sphericity__942->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity__942->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity__942->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__942->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__942->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__942->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__942->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__942->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity__942->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Sphericity__942->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity__942->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
