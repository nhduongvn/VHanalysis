#ifdef __CLING__
#pragma cling optimize(0)
#endif
void overlay_jets_nJet_17_logY()
{
//=========Macro generated from canvas: overlay_jets_nJet_17/overlay_jets_nJet_17
//=========  (Wed Mar  1 14:31:22 2023) by ROOT version 6.26/06
   TCanvas *overlay_jets_nJet_17 = new TCanvas("overlay_jets_nJet_17", "overlay_jets_nJet_17",0,0,600,600);
   gStyle->SetOptStat(0);
   overlay_jets_nJet_17->SetHighLightColor(2);
   overlay_jets_nJet_17->Range(-3.3,-12.61947,15.36667,1.628339);
   overlay_jets_nJet_17->SetFillColor(0);
   overlay_jets_nJet_17->SetBorderMode(0);
   overlay_jets_nJet_17->SetBorderSize(2);
   overlay_jets_nJet_17->SetLogy();
   overlay_jets_nJet_17->SetLeftMargin(0.15);
   overlay_jets_nJet_17->SetFrameBorderMode(0);
   overlay_jets_nJet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",14,-0.5,13.5);
   st_stack_56->SetMinimum(6.387149e-12);
   st_stack_56->SetMaximum(1.597931);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetTitle("Jet multiplicity");
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetTitleOffset(1);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/1.0");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetTitleOffset(1);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_jets_nJet_stack_1 = new TH1D("VbbHcc_jets_nJet_stack_1","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_1->SetBinContent(1,0.1168128);
   VbbHcc_jets_nJet_stack_1->SetBinContent(2,0.175905);
   VbbHcc_jets_nJet_stack_1->SetBinContent(3,0.3039325);
   VbbHcc_jets_nJet_stack_1->SetBinContent(4,0.2358944);
   VbbHcc_jets_nJet_stack_1->SetBinContent(5,0.118576);
   VbbHcc_jets_nJet_stack_1->SetBinContent(6,0.03643276);
   VbbHcc_jets_nJet_stack_1->SetBinContent(7,0.009619391);
   VbbHcc_jets_nJet_stack_1->SetBinContent(8,0.002266992);
   VbbHcc_jets_nJet_stack_1->SetBinContent(9,0.0004485973);
   VbbHcc_jets_nJet_stack_1->SetBinContent(10,9.665242e-05);
   VbbHcc_jets_nJet_stack_1->SetBinContent(11,9.263072e-06);
   VbbHcc_jets_nJet_stack_1->SetBinContent(12,5.678759e-06);
   VbbHcc_jets_nJet_stack_1->SetBinError(1,0.0005031845);
   VbbHcc_jets_nJet_stack_1->SetBinError(2,0.0005974387);
   VbbHcc_jets_nJet_stack_1->SetBinError(3,0.0007625007);
   VbbHcc_jets_nJet_stack_1->SetBinError(4,0.0006436879);
   VbbHcc_jets_nJet_stack_1->SetBinError(5,0.0004330384);
   VbbHcc_jets_nJet_stack_1->SetBinError(6,0.0002252125);
   VbbHcc_jets_nJet_stack_1->SetBinError(7,0.0001137668);
   VbbHcc_jets_nJet_stack_1->SetBinError(8,5.595123e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(9,2.492707e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(10,1.194948e-05);
   VbbHcc_jets_nJet_stack_1->SetBinError(11,2.982731e-06);
   VbbHcc_jets_nJet_stack_1->SetBinError(12,2.928343e-06);
   VbbHcc_jets_nJet_stack_1->SetEntries(994122);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_nJet_stack_1->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_1->SetLineWidth(2);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_1,"");
   
   TH1D *VbbHcc_jets_nJet_stack_2 = new TH1D("VbbHcc_jets_nJet_stack_2","",14,-0.5,13.5);
   VbbHcc_jets_nJet_stack_2->SetBinContent(1,0.5279179);
   VbbHcc_jets_nJet_stack_2->SetBinContent(2,0.2917348);
   VbbHcc_jets_nJet_stack_2->SetBinContent(3,0.1648683);
   VbbHcc_jets_nJet_stack_2->SetBinContent(4,0.01343474);
   VbbHcc_jets_nJet_stack_2->SetBinContent(5,0.001788846);
   VbbHcc_jets_nJet_stack_2->SetBinContent(6,0.0002198778);
   VbbHcc_jets_nJet_stack_2->SetBinContent(7,3.030911e-05);
   VbbHcc_jets_nJet_stack_2->SetBinContent(8,4.422153e-06);
   VbbHcc_jets_nJet_stack_2->SetBinContent(9,6.587577e-07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(10,1.033955e-07);
   VbbHcc_jets_nJet_stack_2->SetBinContent(11,1.521982e-08);
   VbbHcc_jets_nJet_stack_2->SetBinContent(12,2.255342e-09);
   VbbHcc_jets_nJet_stack_2->SetBinContent(13,3.642977e-10);
   VbbHcc_jets_nJet_stack_2->SetBinContent(14,4.305746e-11);
   VbbHcc_jets_nJet_stack_2->SetBinContent(15,1.673784e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(1,7.98568e-05);
   VbbHcc_jets_nJet_stack_2->SetBinError(2,5.776572e-05);
   VbbHcc_jets_nJet_stack_2->SetBinError(3,4.009998e-05);
   VbbHcc_jets_nJet_stack_2->SetBinError(4,6.688474e-06);
   VbbHcc_jets_nJet_stack_2->SetBinError(5,1.465567e-06);
   VbbHcc_jets_nJet_stack_2->SetBinError(6,3.731764e-07);
   VbbHcc_jets_nJet_stack_2->SetBinError(7,1.031801e-07);
   VbbHcc_jets_nJet_stack_2->SetBinError(8,2.895444e-08);
   VbbHcc_jets_nJet_stack_2->SetBinError(9,4.497876e-09);
   VbbHcc_jets_nJet_stack_2->SetBinError(10,1.386284e-09);
   VbbHcc_jets_nJet_stack_2->SetBinError(11,2.610913e-10);
   VbbHcc_jets_nJet_stack_2->SetBinError(12,8.170261e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(13,3.124108e-11);
   VbbHcc_jets_nJet_stack_2->SetBinError(14,6.422659e-12);
   VbbHcc_jets_nJet_stack_2->SetBinError(15,7.063024e-12);
   VbbHcc_jets_nJet_stack_2->SetEntries(9.368306e+08);

   ci = TColor::GetColor("#ff0000");
   VbbHcc_jets_nJet_stack_2->SetLineColor(ci);
   VbbHcc_jets_nJet_stack_2->SetLineStyle(2);
   VbbHcc_jets_nJet_stack_2->SetLineWidth(2);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetRange(1,14);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_nJet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_nJet_stack_2,"");
   st->Draw("nostack,hist");
   
   TLegend *leg = new TLegend(0.6,0.7,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_nJet_stack_1","nJet (signal)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_nJet_stack_2","nJet (bckg)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   overlay_jets_nJet_17->Modified();
   overlay_jets_nJet_17->cd();
   overlay_jets_nJet_17->SetSelected(overlay_jets_nJet_17);
}
