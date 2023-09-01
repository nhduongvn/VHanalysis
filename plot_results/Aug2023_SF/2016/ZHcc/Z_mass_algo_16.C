#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-80,-0.01066371,453.3333,0.09597339);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__374 = new TH1D("VbbHcc_algo_Z_mass__374","",40,0,400);
   VbbHcc_algo_Z_mass__374->SetBinContent(4,0.003235934);
   VbbHcc_algo_Z_mass__374->SetBinContent(5,0.003159706);
   VbbHcc_algo_Z_mass__374->SetBinContent(6,0.01154257);
   VbbHcc_algo_Z_mass__374->SetBinContent(7,0.02600444);
   VbbHcc_algo_Z_mass__374->SetBinContent(8,0.02700921);
   VbbHcc_algo_Z_mass__374->SetBinContent(9,0.06204566);
   VbbHcc_algo_Z_mass__374->SetBinContent(10,0.08124732);
   VbbHcc_algo_Z_mass__374->SetBinContent(11,0.03954268);
   VbbHcc_algo_Z_mass__374->SetBinContent(12,0.03216174);
   VbbHcc_algo_Z_mass__374->SetBinContent(13,0.03382739);
   VbbHcc_algo_Z_mass__374->SetBinContent(14,0.0360528);
   VbbHcc_algo_Z_mass__374->SetBinContent(15,0.03280936);
   VbbHcc_algo_Z_mass__374->SetBinContent(16,0.01001455);
   VbbHcc_algo_Z_mass__374->SetBinContent(17,0.01374831);
   VbbHcc_algo_Z_mass__374->SetBinContent(18,0.01089055);
   VbbHcc_algo_Z_mass__374->SetBinContent(19,0.01138391);
   VbbHcc_algo_Z_mass__374->SetBinContent(20,0.01459869);
   VbbHcc_algo_Z_mass__374->SetBinContent(21,0.006423789);
   VbbHcc_algo_Z_mass__374->SetBinContent(22,0.00715397);
   VbbHcc_algo_Z_mass__374->SetBinContent(23,0.008234255);
   VbbHcc_algo_Z_mass__374->SetBinContent(24,0.01365747);
   VbbHcc_algo_Z_mass__374->SetBinContent(25,0.006122527);
   VbbHcc_algo_Z_mass__374->SetBinContent(26,0.004526402);
   VbbHcc_algo_Z_mass__374->SetBinContent(27,0.00598389);
   VbbHcc_algo_Z_mass__374->SetBinContent(28,0.006896883);
   VbbHcc_algo_Z_mass__374->SetBinContent(29,0.009081109);
   VbbHcc_algo_Z_mass__374->SetBinContent(30,0.005852055);
   VbbHcc_algo_Z_mass__374->SetBinContent(31,0.00584603);
   VbbHcc_algo_Z_mass__374->SetBinContent(32,0.004271069);
   VbbHcc_algo_Z_mass__374->SetBinContent(33,0.007329015);
   VbbHcc_algo_Z_mass__374->SetBinContent(34,0.004103911);
   VbbHcc_algo_Z_mass__374->SetBinContent(35,0.004341073);
   VbbHcc_algo_Z_mass__374->SetBinContent(36,0.003957108);
   VbbHcc_algo_Z_mass__374->SetBinContent(37,0.009900884);
   VbbHcc_algo_Z_mass__374->SetBinContent(38,0.006724737);
   VbbHcc_algo_Z_mass__374->SetBinContent(40,0.004624115);
   VbbHcc_algo_Z_mass__374->SetBinContent(41,0.1849479);
   VbbHcc_algo_Z_mass__374->SetBinError(4,0.002344084);
   VbbHcc_algo_Z_mass__374->SetBinError(5,0.002248148);
   VbbHcc_algo_Z_mass__374->SetBinError(6,0.005381948);
   VbbHcc_algo_Z_mass__374->SetBinError(7,0.007531216);
   VbbHcc_algo_Z_mass__374->SetBinError(8,0.008240055);
   VbbHcc_algo_Z_mass__374->SetBinError(9,0.01140723);
   VbbHcc_algo_Z_mass__374->SetBinError(10,0.01362438);
   VbbHcc_algo_Z_mass__374->SetBinError(11,0.01000157);
   VbbHcc_algo_Z_mass__374->SetBinError(12,0.008717469);
   VbbHcc_algo_Z_mass__374->SetBinError(13,0.008743309);
   VbbHcc_algo_Z_mass__374->SetBinError(14,0.009061756);
   VbbHcc_algo_Z_mass__374->SetBinError(15,0.008262298);
   VbbHcc_algo_Z_mass__374->SetBinError(16,0.00454946);
   VbbHcc_algo_Z_mass__374->SetBinError(17,0.005787066);
   VbbHcc_algo_Z_mass__374->SetBinError(18,0.004907021);
   VbbHcc_algo_Z_mass__374->SetBinError(19,0.005134688);
   VbbHcc_algo_Z_mass__374->SetBinError(20,0.005369749);
   VbbHcc_algo_Z_mass__374->SetBinError(21,0.003691036);
   VbbHcc_algo_Z_mass__374->SetBinError(22,0.003749978);
   VbbHcc_algo_Z_mass__374->SetBinError(23,0.004155458);
   VbbHcc_algo_Z_mass__374->SetBinError(24,0.005651481);
   VbbHcc_algo_Z_mass__374->SetBinError(25,0.003543243);
   VbbHcc_algo_Z_mass__374->SetBinError(26,0.003230043);
   VbbHcc_algo_Z_mass__374->SetBinError(27,0.003486096);
   VbbHcc_algo_Z_mass__374->SetBinError(28,0.004013714);
   VbbHcc_algo_Z_mass__374->SetBinError(29,0.004545024);
   VbbHcc_algo_Z_mass__374->SetBinError(30,0.003424552);
   VbbHcc_algo_Z_mass__374->SetBinError(31,0.003377982);
   VbbHcc_algo_Z_mass__374->SetBinError(32,0.003021635);
   VbbHcc_algo_Z_mass__374->SetBinError(33,0.003723973);
   VbbHcc_algo_Z_mass__374->SetBinError(34,0.002917407);
   VbbHcc_algo_Z_mass__374->SetBinError(35,0.003094039);
   VbbHcc_algo_Z_mass__374->SetBinError(36,0.002801004);
   VbbHcc_algo_Z_mass__374->SetBinError(37,0.005005284);
   VbbHcc_algo_Z_mass__374->SetBinError(38,0.003883426);
   VbbHcc_algo_Z_mass__374->SetBinError(40,0.003269745);
   VbbHcc_algo_Z_mass__374->SetBinError(41,0.0201456);
   VbbHcc_algo_Z_mass__374->SetEntries(376);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_mass__374->SetFillColor(ci);
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__374->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__374->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__374->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__374->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__374->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__374->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__374->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
